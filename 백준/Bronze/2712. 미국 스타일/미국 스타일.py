import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,unit=input().split()
    n=float(n)
    if unit=='kg':
        print("%.4f lb" % (n*2.2046))
    elif unit=='lb':
        print("%.4f kg" % (n*0.4536))
    elif unit=='l':
        print("%.4f g" % (n*0.2642))
    elif unit=='g':
        print("%.4f l" % (n*3.7854))