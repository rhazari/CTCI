
size_of_int = 4
def change_byte_order(number):
	mask = 0xFF
	new_num = 0
	for i in range(size_of_int):
		mask = mask << i*8
		temp = number & mask
		new_num = new_num | (temp<<(size_of_int-i-1)*8)
	return new_num

number = input('Enter a number: ')
print change_byte_order(number)
