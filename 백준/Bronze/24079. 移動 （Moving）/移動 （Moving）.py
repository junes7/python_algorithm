import sys
input=lambda:sys.stdin.readline().rstrip()
x=int(input())
y=int(input())
z=int(input())
print(1 if x+y<=z+0.5 else 0)