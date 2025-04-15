import sys
input=lambda:sys.stdin.readline().rstrip()
p1,q1,p2,q2=map(int,input().split())
rlt=p1*p2/q1/q2/2
print(1 if rlt==int(rlt) else 0)