import sys
input=lambda:sys.stdin.readline().rstrip()
dir=["N","E","S","W"]
rlt=0
for _ in range(10):
    rlt=(rlt+int(input()))%4
print(dir[rlt])