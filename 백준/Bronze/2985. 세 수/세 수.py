import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c=map(int,input().split())
if a+b==c:
    print("%d+%d=%d" % (a,b,c))
elif a-b==c:
    print("%d-%d=%d" % (a,b,c))
elif a*b==c:
    print("%d*%d=%d" % (a,b,c))
elif a//b==c:
    print("%d/%d=%d" % (a,b,c))
elif a==b+c:
    print(f"{a}={b}+{c}")
elif a==b-c:
    print(f"{a}={b}-{c}")
elif a==b*c:
    print(f"{a}={b}*{c}")
elif a==b//c:
    print(f"{a}={b}/{c}")