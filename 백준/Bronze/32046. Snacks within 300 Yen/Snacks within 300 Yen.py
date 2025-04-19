import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
     n=int(input())
     ans=0
     if n==0: break
     arr=[*map(int,input().split())]
     for i in range(n):
          if ans+arr[i]<301:
               ans+=arr[i]
     print(ans)