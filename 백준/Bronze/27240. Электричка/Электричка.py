import sys
input=lambda:sys.stdin.readline().rstrip()
n,a,b=map(int,input().split())
s,t=map(int,input().split())
if a+1<=s<b and a+1<=t<b:
    print("City")
elif 1<=s<a+1 and 1<=t<a+1 or b<=s<n+1 and b<=t<n+1:
    print("Outside")
else:
    print("Full")