import sys
input=lambda:sys.stdin.readline().rstrip()
n,cnt=int(input()),0
for _ in range(n):
    st=input()
    if st[0]=='C':
        cnt+=1
print(cnt)