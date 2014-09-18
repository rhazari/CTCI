def swap_odd_even(number):
	m1 = 0x55555555
	m2 = 0xaaaaaaaa
	n1 = number & m1
	n2 = number & m2
	return ((n2 >> 1) | (n1 << 1))

number = input('Enter a number: ')
print swap_odd_even(number)
