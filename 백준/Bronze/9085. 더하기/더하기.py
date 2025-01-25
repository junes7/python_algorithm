import sys
n=int(sys.stdin.readline())
for i in range(n):
    m=int(sys.stdin.readline());
    num=list(map(int,sys.stdin.readline().split()))
    print(sum(num))