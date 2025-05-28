import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,d,a,b,f=map(float,input().split())
    print("%d %.6f" % (n,d/(a+b)*f))