def check_two_power(num):
	if(num & (num-1) == 0 and num != 0):
		return 1
	else:
		return 0

number = input('Enter a number: ')
if(check_two_power(number)):
	print 'Number is a power of 2'
else:
	print 'Number not a power of 2'
