t=int(input())
sp=int(input())
s=0
for i in range(sp):
    pri,cnt=map(int,input().split())
    s+=pri*cnt
print("Yes" if s==t else "No")