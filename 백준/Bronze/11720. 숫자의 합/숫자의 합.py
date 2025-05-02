import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
cnt=0
for i in range(n):
    cnt+=int(st[i])
print(cnt)