import sys
mii=lambda:int(sys.stdin.readline().rstrip())
n=mii()
for i in range(n):
    a=mii()
    print("even" if a%2==0 else "odd")