import sys
num=list(map(int,sys.stdin.readline().split()))
num.sort()
while num[-1]>=num[0]+num[1]:
    num[-1]-=1
print(sum(num))