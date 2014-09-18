N = 1024
M = 21

i = 6
j = 2

mask = 1<<((i-j)+1)
mask = mask-1
mask <<= j
mask = ~mask
print mask

print (N & mask) |(M<<j)


