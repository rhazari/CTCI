
fib = [0]*1000
def fibonacci(i):
    if(i==0):
        return 1
    if(i==1):
        return 1
    if(fib[i] != 0):
        return fib[i]
    fib[i] = fibonacci(i-1)+fibonacci(i-2)
    return fib[i]
    
for n in range(100):
    print fibonacci(n)

