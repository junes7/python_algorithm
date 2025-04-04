import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
a=int(input())
b=int(input())
cnt=0
while True:
    if a==b:
        break
    else:
        if a==m:
            a-=m
        a+=1
        cnt+=1
print(cnt)