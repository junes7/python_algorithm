import sys
input=lambda:sys.stdin.readline().rstrip()
p,r=map(int,input().split())
v=p/r
if v<0.2:
    print("weak")
elif 0.2<=v<0.4:
    print("normal")
elif 0.4<=v<0.6:
    print("strong")
else:
    print("very strong")