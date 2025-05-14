import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,m=map(int,input().split())
    rem=m*2-n
    print(rem,m-rem)