import sys
input=lambda:sys.stdin.readline().rstrip()
A,B=map(float,input().split())
for _ in range(int(input())):
    z,q=input().split()
    z=float(z)
    print(f"{z*(B/A) if q=="A" else z*(A/B):.16f}")