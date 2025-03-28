import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
k=int(input())
x=min(k+60,n)
print(x*1500+ (n-x)*3000)