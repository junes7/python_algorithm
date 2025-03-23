import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
price=[int(input()) for _ in range(n)]
m=int(input())
order=[int(input()) for _ in range(m)]
s=0
for i in range(m):
    s+=price[order[i]-1]
print(s)