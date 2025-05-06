import sys
input=lambda:sys.stdin.readline().rstrip()
def solution(n,arr,que):
    dp=[[False]*(n+1) for _ in range(n+1)]
    for i in range(n):
        for j in range(1,n+1-i):
            s,e=j,j+i
            if s==e or (arr[s]==arr[e] and (s+1==e or dp[s+1][e-1])):
                dp[s][e]=True
    for s,e in que:
        print(1 if dp[s][e] else 0)
n=int(input())
arr=[0]+[*map(int,input().split())]
que=[[*map(int,input().split())] for _ in range(int(input()))]
solution(n,arr,que)