import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c=map(int,input().split())
print("correct!" if a+b==c else "wrong!")