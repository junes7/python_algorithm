import sys
input=lambda:sys.stdin.readline().rstrip()
t=input()
n=int(input())
cnt=0
for _ in range(n):
    elem=input()
    if elem==t:
        cnt+=1
print(cnt)