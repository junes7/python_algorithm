import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print(' '*(n-1)+'*')
for i in range(n-1):
    print(' '*(n-2-i)+'*'+' '*(i*2+1)+'*')