import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a,b,ans=1,2,0
while a!=b:
    if b**2-a**2==n:
        ans+=1
        b+=1
    elif b**2-a**2>n: a+=1
    else: b+=1
print(ans)