import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
milk=[*map(int,input().split())]
cnt=0
for i in range(n):
    if milk[i]==cnt%3:
        cnt+=1
print(cnt)