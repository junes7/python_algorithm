import sys
s=int(sys.stdin.readline())
i=1
while s>=i:
    s-=i
    i+=1
print(i-1)