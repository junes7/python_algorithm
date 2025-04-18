import sys
input=lambda:sys.stdin.readline().rstrip()
arr,total={},0
for _ in range(int(input())):
    ci,wi=map(int,input().split())
    arr[ci]=wi
for _ in range(int(input())):
    total+=-10+arr.get(int(input()),0)
print(total)