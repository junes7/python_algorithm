import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
a = list()
for _ in range(N):
    a.append(list(map(int,input().split())))
a.sort(key= lambda x : (x[0],x[1]))
opt = -1
for i in range(N):
    if a[i][0] >= opt:
        opt = a[i][0] + a[i][1]
    else:
        opt += a[i][1]
print(opt)