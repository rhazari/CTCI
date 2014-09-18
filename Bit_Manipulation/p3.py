def num_set_bits(num):
	count = 0
	while(num):
		if((num & 1)==1):
			count = count+1
		num >>= 1
	return count


number = input('Enter a number: ')
num_bits = num_set_bits(number)

succ = number+1
while(num_set_bits(succ) != num_bits):
	succ = succ+1

prev = number-1
while(num_set_bits(prev) != num_bits and prev > 0):
	prev = prev-1

print 'Next higher number: '+str(succ)

if (prev==0):
	print 'Not defined'	
else:
	print 'Next smaller number: '+str(prev)

