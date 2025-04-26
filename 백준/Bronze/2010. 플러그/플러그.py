import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cnt=1
for _ in range(n):
    cnt+=int(input())-1
print(cnt)