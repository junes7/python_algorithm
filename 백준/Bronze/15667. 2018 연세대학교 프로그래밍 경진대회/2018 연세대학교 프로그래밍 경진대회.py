import sys
input=lambda:sys.stdin.readline().rstrip()
k=int(input())
for i in range(1,k+1):
    if 1+i+i**2==k:
        print(i)
        break