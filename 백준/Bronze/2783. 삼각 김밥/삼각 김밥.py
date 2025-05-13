import sys
input=lambda:sys.stdin.readline().rstrip()
x,y=map(int,input().split())
price=x*1000.0/y
for _ in range(int(input())):
    xi,yi=map(int,input().split())
    if price>xi*1000.0/yi:
        price=xi*1000.0/yi
print(f"{price:.2f}")