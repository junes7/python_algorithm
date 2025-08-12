import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
li=[*map(int,input().split())]
cnt=sum([(i+1)//2 for i in li])
print("YES" if cnt>=n else "NO")