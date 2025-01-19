import sys
n,num=int(sys.stdin.readline()),[]
for i in range(n):
    num+=[int(sys.stdin.readline())]
num.sort()
for i in range(n):
    print(num[i])