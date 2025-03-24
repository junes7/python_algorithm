import sys
input=lambda:sys.stdin.readline().rstrip()
T=int(input())
for _ in range(T):
    a,b,c=map(int,input().split())
    cnt=0
    for x in range(a):
        for y in range(b):
            for z in range(c):
                if (x+1)%(y+1)==(y+1)%(z+1)==(z+1)%(x+1):
                    cnt+=1
    print(cnt)