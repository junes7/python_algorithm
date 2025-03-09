import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
d=int(input())
if m==2:
    print("Before" if d<18 else "Special" if d==18 else "After")
else:
    print("Before" if m<2 else "After")