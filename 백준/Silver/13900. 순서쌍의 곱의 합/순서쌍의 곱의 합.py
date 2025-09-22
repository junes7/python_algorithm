import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
num = list(map(int, input().split()))
rlt,acc = 0,0
for i in range(n):
    rlt += num[i] * acc
    acc += num[i]
print(rlt)