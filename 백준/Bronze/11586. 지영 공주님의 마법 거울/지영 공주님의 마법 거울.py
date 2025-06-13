import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
li = []
for i in range(n):
    li.append(input())
K = int(input())
if K == 2:
    for i in range(n):
        li[i] = li[i][::-1]
elif K == 3:
    li = li[::-1]
for i in range(n):
    print(li[i])