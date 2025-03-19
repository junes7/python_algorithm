import sys
input=lambda:sys.stdin.readline().rstrip()
w,h=map(int,input().split())
r=w+h-(w**2+h**2)**0.5
print(f"{r:.0f}" if r==int(r) else f"{r:.9f}")