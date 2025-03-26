import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
A=[*map(int,input().split())]
B=[*map(int,input().split())]
s=0
for i in range(N):
    s+=3 if A[i]>B[i] else 1 if A[i]==B[i] else 0
print(s)