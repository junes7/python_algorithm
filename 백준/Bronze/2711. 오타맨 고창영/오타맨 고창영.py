import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    i,st=input().split()
    i=int(i)-1
    print(st[:i]+st[i+1:])