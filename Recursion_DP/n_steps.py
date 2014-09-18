
def num_ways(num_steps):
	if(num_steps >=0):
		if(num_steps == 0):
			return 0
		elif(num_steps == 1):
			return 1
		elif(num_steps == 2):
			return 2
		else:
			return (num_ways(num_steps-1) + num_ways(num_steps-2) + num_ways(num_steps-3))

print num_ways(5)
