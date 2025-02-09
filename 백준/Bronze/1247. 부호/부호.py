import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(3):
    n=int(input())
    s=0
    for i in range(n):
        s+=int(input())
    print("0" if s==0 else "+" if s>0 else "-")