import sys
input=lambda:sys.stdin.readline().rstrip()
rlt=1
for _ in range(3):
    rlt*=int(input())
rlt=str(rlt)
for i in range(10):
    print(rlt.count(str(i)))