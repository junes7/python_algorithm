import sys
input=lambda:sys.stdin.readline().rstrip()
M,K=map(int,input().split())
print("Yes" if M%K==0 else "No")