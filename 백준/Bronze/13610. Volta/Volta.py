import sys
input=lambda:sys.stdin.readline().rstrip()
x,y=map(int,input().split())
cnt=0
while 1:
    if y*cnt-x*cnt>=y: break
    cnt+=1
print(cnt)