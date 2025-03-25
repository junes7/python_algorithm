import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted(set([*map(int,input().split())]))
print(*arr,sep="\n")