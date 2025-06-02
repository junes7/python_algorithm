import sys
input=lambda:sys.stdin.readline().rstrip()
def hpy(n):
    s=0
    while n>0:
        s+=(n%10)**2
        n//=10
    return s
n=int(input())
while 1:
    n=hpy(n)
    if n==4:
        print("UNHAPPY")
        break
    elif n==1:
        print("HAPPY")
        break