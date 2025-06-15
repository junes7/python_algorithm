import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
rlt,a = 1,1
for i in range(n):
    rlt += a
    if i%2 == 0:
        a += 1
print(rlt)