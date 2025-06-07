import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
trees=[*map(int,input().split())]
lmn=[trees[i]-(n-i) for i in range(n)]
print(max(lmn))