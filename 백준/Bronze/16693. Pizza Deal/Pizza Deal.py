import sys,math
input=lambda:sys.stdin.readline().rstrip()
a1,p1=map(int,input().split())
r1,p2=map(int,input().split())
print("Slice of pizza" if a1*p2>r1**2*math.pi*p1 else "Whole pizza")