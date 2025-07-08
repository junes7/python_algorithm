import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
mul3=max(arr[0]*arr[1]*arr[-1],arr[-3]*arr[-2]*arr[-1])
mul2=max(arr[0]*arr[1],arr[-2]*arr[-1])
print(max(mul3,mul2))