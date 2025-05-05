import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([int(input()) for _ in range(int(input()))],reverse=True)
print(*arr,sep="\n")