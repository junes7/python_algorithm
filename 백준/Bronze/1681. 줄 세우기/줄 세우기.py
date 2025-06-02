import sys
input=lambda:sys.stdin.readline().rstrip()
n,l=map(int,input().split())
num,cnt=1,0
while 1:
    if str(l) not in str(num):
        cnt+=1
        if cnt==n:
            print(num)
            break
    num+=1