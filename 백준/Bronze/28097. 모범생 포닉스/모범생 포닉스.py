import sys
input=lambda:sys.stdin.readline().rstrip()
n=input()
arr=[*map(int,input().split())]
t=sum(arr)+(len(arr)-1)*8
print(t//24,t%24)