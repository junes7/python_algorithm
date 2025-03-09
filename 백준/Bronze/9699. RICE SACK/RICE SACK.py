import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(1,n+1):
    print("Case #"+str(i)+": "+str(max([*map(int,input().split())])))