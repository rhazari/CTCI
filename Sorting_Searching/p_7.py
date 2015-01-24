
def getKey(item):
    return item[0]

arr = [[65,70],[70,150],[56,90],[75,190],[60,95],[68,110]]

sorted_arr = sorted(arr,key=getKey)

print sorted_arr

length = len(sorted_arr)

stack = []
sub_stack = []
sub_stack.append(sorted_arr[0][1])
stack.append(sub_stack)
stack_size = 1
for n in range(1,length):
    for m in range(stack_size):
        if(sorted_arr[n][1] >= stack[m][0]):
            stack[m].append(sorted_arr[n][1])
        else:
            stack.append([sorted_arr[n][1]])
            stack_size = stack_size+1 

max_height = 0        
for n in range(stack_size):
    if(max_height < len(stack[n])):
        max_height = len(stack[n])
        
print "Max Height of the human tower is: "+str(max_height)
    




