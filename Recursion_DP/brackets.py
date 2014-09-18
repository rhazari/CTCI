def bracket(num):
	if (num):
		print '(',
		if(num == 1):
			print 5,
		bracket(num-1)
		#print num,
		print ')',


bracket(3)
