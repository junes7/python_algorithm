import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    maxn,name=0,""
    for _ in range(int(input())):
        s,l=input().split()
        l=int(l)
        if maxn<l:
            maxn=l
            name=s
    print(name)