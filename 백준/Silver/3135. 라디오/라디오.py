import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
minn=abs(b-a)
for _ in range(int(input())):
    frq=int(input())
    minn=min(abs(b-frq)+1,minn)
print(minn)