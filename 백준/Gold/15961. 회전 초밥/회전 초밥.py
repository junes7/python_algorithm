import sys
n,d,k,c=map(int,sys.stdin.readline().rstrip().split())
arr=[int(sys.stdin.readline().rstrip()) for _ in range(n)]
check=[0]*(d+1)
check[c]=1
eat_sushi,max_sushi=1,0
for i in range(k):
    sushi=arr[i%n]
    if not check[sushi]:
        eat_sushi+=1
    check[sushi]+=1
max_sushi=eat_sushi
for i in range(0,n):
    start=arr[i%n]
    end=arr[(i+k)%n]
    check[start]-=1
    if not check[start]:
        eat_sushi-=1
    if not check[end]:
        eat_sushi+=1
    check[end]+=1
    max_sushi=max(max_sushi,eat_sushi)
print(max_sushi)