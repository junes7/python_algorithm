import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,b=map(float,input().split())
    print(f"The height of the triangle is {2*a/b:.2f} units")