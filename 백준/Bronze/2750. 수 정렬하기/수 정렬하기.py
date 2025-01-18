import sys
n=int(sys.stdin.readline())
num=[int(sys.stdin.readline()) for i in range(n)]
num.sort()
for i in num:
    print(i)