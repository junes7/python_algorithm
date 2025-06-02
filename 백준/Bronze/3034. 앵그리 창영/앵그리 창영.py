import sys
input=lambda:sys.stdin.readline().rstrip()
n,w,h=map(int,input().split())
d=(w**2+h**2)**(0.5)
for i in range(n):
    t=int(input())
    print("DA" if t<=d else "NE")