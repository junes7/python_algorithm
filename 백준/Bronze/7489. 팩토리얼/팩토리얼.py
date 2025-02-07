import sys
def facto(n):
    if n<2:
        return 1
    else:
        return n*facto(n-1);

mii=lambda:int(sys.stdin.readline().rstrip())
t=mii()
for i in range(t):
    n=mii()
    s,r=str(facto(n)),''
    for i in range(len(s)-1,-1,-1):
        if s[i]!='0':
            r=s[i]
            break
    print(r)