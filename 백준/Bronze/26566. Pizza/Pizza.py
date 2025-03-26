import sys,math
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    a1,p1=map(int,input().split())
    r1,p2=map(int,input().split())
    print("Whole pizza" if a1/p1<math.pi*r1**2/p2 else "Slice of pizza")