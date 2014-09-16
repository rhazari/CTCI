
def brackets(num):
	if(num):
		print '(',
		brackets(num-1)
		print ')',


def all_brackets(val):
	for num in range(val):
		ref = val-num
		while(ref):
			brackets(num+1)
			ref = ref-1

all_brackets(3)
