import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
print(30/2+(m-30)*3/2 if m-30>0 else m/2)