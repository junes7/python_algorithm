def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
import sys
input=lambda:sys.stdin.readline().rstrip()
x=int(input())
y=int(input())
st="All positions change in year "
gcdn=gcd(4,2)
lcm=4*2*3*5//gcdn
while True:
    print(st+str(x))
    x+=lcm
    if x>y:
        break