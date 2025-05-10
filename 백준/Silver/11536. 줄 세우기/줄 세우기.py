import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
name=[]
for i in range(n):
    name+=[list(input().split())]
in_name  = sorted(name)
de_name  = sorted(name, reverse=True)
if in_name == name:
    print("INCREASING")
elif de_name == name:
    print("DECREASING")
else:
    print("NEITHER")