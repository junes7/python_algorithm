import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s=input()
cnt=0
if s.count('x')>0:
    arr=s.split('x')
    for c in arr:
        cnt=c.count('o')
        if cnt>=3:
            break
else:
    cnt=s.count('o')
print("Yes" if cnt>=3 else "No")