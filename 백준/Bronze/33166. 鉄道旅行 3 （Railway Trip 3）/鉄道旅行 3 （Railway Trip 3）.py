import sys,math
input=lambda:sys.stdin.readline().rstrip()
p,q=map(int,input().split())
a,b=map(int,input().split())
print(p*a+(q-p)*b if p<q else q*a)