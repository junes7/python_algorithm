import sys
input=lambda:sys.stdin.readline().rstrip()
L=int(input())
for _ in range(L):
    n,ch=input().split()
    print(ch*int(n))