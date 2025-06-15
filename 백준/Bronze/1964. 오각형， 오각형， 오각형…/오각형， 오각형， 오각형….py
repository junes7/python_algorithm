import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print(((n*(n+1)//2)*3+1+n) %45678)