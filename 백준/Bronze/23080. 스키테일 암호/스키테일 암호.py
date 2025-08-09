import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
for i in range(0,len(st),n):
    print(st[i],end='')