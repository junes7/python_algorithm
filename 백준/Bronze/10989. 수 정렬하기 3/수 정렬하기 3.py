import sys
n=int(sys.stdin.readline())
num=dict()
for i in range(n):
    elem=int(sys.stdin.readline())
    num[elem]=1 if elem not in num else num[elem]+1
dic1=sorted(num.items())
for i,j in dic1:
    for k in range(j):
        print(i)