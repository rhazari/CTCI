def bracket(num):
	if (num):
		print '(',
		bracket(num-1)
		#print num
		print ')',


bracket(3)
