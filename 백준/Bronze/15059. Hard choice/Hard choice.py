import sys
input=lambda:sys.stdin.readline().rstrip()
Ca,Ba,Pa=map(int,input().split())
Cr,Br,Pr=map(int,input().split())
r=[0 if Cr-Ca<0 else Cr-Ca,0 if Br-Ba<0 else Br-Ba,0 if Pr-Pa<0 else Pr-Pa]
print(sum(r))