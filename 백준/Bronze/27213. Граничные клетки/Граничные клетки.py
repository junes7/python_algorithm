import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
n=int(input())
print(m*n if m==1 or n==1 else m*n-(m-2)*(n-2))