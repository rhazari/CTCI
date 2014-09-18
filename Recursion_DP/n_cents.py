
def make_change(total_, denomination):
	#print denomination
	next_denom = 0
	if(denomination == 25):
		next_denom = 10
	elif(denomination == 10):
		next_denom = 5
	elif(denomination == 5):
		next_denom = 1
	elif(denomination == 1):
		return 1

	ways = 0
	i = 0
	while(i*denomination <= total_):
		ways = ways+make_change(total_-i*denomination, next_denom)
		i = i+1
	return ways

print make_change(25,25)
