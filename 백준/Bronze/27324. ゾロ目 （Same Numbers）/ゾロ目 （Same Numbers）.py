import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print(1 if n//10==n%10 else 0)