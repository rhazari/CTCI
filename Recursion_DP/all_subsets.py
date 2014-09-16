list = [3,6,9]

length = len(list)

max = 1<<length

sub_sets = []
for num in range(max):
	sub_arr = []
	while(num):
		if(num & 1 == 1):
			sub_arr.append(1)
		else:
			sub_arr.append(0)
		num >>= 1
	l1 = len(sub_arr)
	while(l1 < length):
		sub_arr.append(0)
		l1 = l1+1
	sub_arr.reverse()  	
	sub_sets.append(sub_arr)

print sub_sets

all_subsets = []
for sets in sub_sets:
	idx = 0
	arr = []
	for digit in sets:
		if(digit == 1):
			arr.append(list[idx])
		idx = idx+1
	all_subsets.append(arr)

print all_subsets


