import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(1,int(input())+1):
    a,b=map(int,input().split())
    print("Case #%d: %d + %d = %d" % (i,a,b,a+b))