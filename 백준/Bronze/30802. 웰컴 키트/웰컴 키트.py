import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
size=[*map(int,input().split())]
t,p=map(int,input().split())
cnt=sum([(size[i]+t-1)//t for i in range(len(size))])
print(cnt)
print(n//p,n%p)