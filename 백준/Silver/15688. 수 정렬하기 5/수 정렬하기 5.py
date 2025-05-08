import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([int(input()) for _ in range(int(input()))])
print(*arr,sep="\n")