import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
a = n*(n+1)//2
print((a*3 + n + 1)%45678)