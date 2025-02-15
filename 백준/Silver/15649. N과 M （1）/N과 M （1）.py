from itertools import permutations
n,m=map(int,input().split())
arr=list(range(1,n+1))
for a in permutations(arr,m):
    print(*a)