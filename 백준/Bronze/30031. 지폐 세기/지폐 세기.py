import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
width={136:1000,142:5000,148:10000,154:50000}
s=0
for i in range(N):
    w,h=map(int,input().split())
    s+=width[w]
print(s)