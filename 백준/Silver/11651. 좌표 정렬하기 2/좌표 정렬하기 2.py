import sys
n=int(sys.stdin.readline())
num=[list(map(int,sys.stdin.readline().split())) for i in range(n)]
num.sort(key=lambda x:(x[1],x[0]))
for i in num:
    print(i[0],i[1])