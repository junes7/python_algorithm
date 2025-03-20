import sys
input=lambda:sys.stdin.readline().rstrip()
A,B,C=map(int,input().split())
if A==B:
    if B==C:
        print('*')
    else:
        print('C')
else: # A!=B
    if B==C:
        print('A')
    else:
        print('B')