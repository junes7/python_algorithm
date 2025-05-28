import sys
input=lambda:sys.stdin.readline().rstrip()
a,d,k=map(int,input().split())
n=(k-a+d)/d
print(int(n) if n>0 and n==int(n) else "X")