import sys
a,b=map(int,sys.stdin.readline().split())
cnt=1
while b>a:
    if b%2!=0 and b%10!=1:
        break;
    b=(b-1)//10 if b%10==1 else b//2
    cnt+=1
print(cnt if b==a else -1)