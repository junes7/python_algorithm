import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    x=[*map(int,input().split())]
    y=[*map(int,input().split())]
    cnt=0
    for i in y:
        for j in x:
            for t in range(101):
                if i==t and t==j:
                    cnt+=1
    print(cnt)