import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
c=int(input())
print(a+b-2*c if a+b>=c*2 else a+b)