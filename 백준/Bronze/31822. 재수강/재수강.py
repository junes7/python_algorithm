import sys
input=lambda:sys.stdin.readline().rstrip()
t=input()
n,cnt=int(input()),0
for _ in range(n):
    st=input()
    if st[:5]==t[:5]:
        cnt+=1
print(cnt)