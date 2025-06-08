import sys
input=lambda:sys.stdin.readline().rstrip()
m,n=map(int,input().split())
print("YES" if (m*n)%3==0 else "NO")