import sys
input=lambda:sys.stdin.readline().rstrip()
N = list(map(int, input()))
A,B = 0,0
line = len(N)//2
for i in range(0,line):
    A += N[i]
for i in range(line, len(N)):
    B += N[i]
if A == B:
    print("LUCKY")
else:
    print("READY")