n=int(input())
l=list(map(int,input().split()))
t=int(input())
r=0
for i in range(n):
    if l[i]==t:
        r+=1
print(r)