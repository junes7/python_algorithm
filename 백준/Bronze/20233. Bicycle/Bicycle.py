import sys
input=lambda:sys.stdin.readline().rstrip()
a=int(input())
x=int(input())
b=int(input())
y=int(input())
t=int(input())
print(a+(t-30)*x*21 if t-30>0 else a,b+(t-45)*y*21 if t-45>0 else b)