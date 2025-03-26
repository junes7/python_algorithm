import sys
input=lambda:sys.stdin.readline().rstrip()
l=int(input())
n=int(input())
t=float(input())
cnt=0
for _ in range(n):
    ft,bt=map(float,input().split())
    if l/ft+l/bt<t:
        cnt+=1
print("HOPE" if cnt else "DOOMED")