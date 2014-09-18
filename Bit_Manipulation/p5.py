def num_set_bits(num):
	count = 0
	while(num):
		if((num & 1) == 1):
			count = count+1
		num >>= 1
	return count

def check_bit_flips(num1,num2):
	mask = num1 ^ num2
	return num_set_bits(mask)

num_1 = input('Enter 1st number: ')
num_2 = input('Enter 2nd number: ')
print 'Bit flips required: '+str(check_bit_flips(num_1,num_2))
	
