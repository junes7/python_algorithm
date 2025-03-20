import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c,d=map(int,input().split())
print('E' if a*b==c*d else 'M' if a*b>c*d else 'P')