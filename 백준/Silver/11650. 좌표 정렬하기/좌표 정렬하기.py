import sys
n=int(sys.stdin.readline())
num=[]
for i in range(n):
    num+=[list(map(int,input().split()))]
num.sort(key=lambda x:(x[0],x[1]))
for i in range(n):
    print(num[i][0], num[i][1])