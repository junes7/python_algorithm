import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
rlt=0.0
for _ in range(t):
     q,y=map(float,input().split())
     rlt+=q*y
print(f"{rlt:.3f}")