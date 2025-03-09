import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    t=input()
    if t=="": break
    x,y=map(float,t.split())
    if x==0 or y==0:
        print("AXIS")
    else:
        print(("Q1" if y>0 else "Q4") if x>0 else ("Q2" if y>0 else "Q3"))