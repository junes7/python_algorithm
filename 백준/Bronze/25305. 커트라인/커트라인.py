n,k=map(int,input().split())
t=list(map(int,input().split()))
t.sort(reverse=True)
print(t[k-1])