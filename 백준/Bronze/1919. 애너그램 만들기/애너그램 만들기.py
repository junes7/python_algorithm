import sys
input=lambda:sys.stdin.readline().rstrip()
a=[0]*26
b=a[:]
total=0
for i in input():
    a[ord(i)-97]+=1
for i in input():
    b[ord(i)-97]+=1
for i in range(26):
    total+=abs(a[i]-b[i])
print(total)