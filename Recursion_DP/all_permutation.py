
def get_permutation(string):
	result = []
	#print string
	if(len(string) == 1):
		result.append(string)

	elif(len(string) > 1):
		first = string[0]
		remainder = string[1:]

		words = get_permutation(remainder)
		for word in words:
			idx = 0
			for k in range(len(word)+1):
				result.append(insert_char(word,first,idx))
				idx = idx+1
	return result

def insert_char(word,char,idx):
	start = word[0:idx]
	end = word[idx:]
	return start+char+end

print get_permutation('abcd')
