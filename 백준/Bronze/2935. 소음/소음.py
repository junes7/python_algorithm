import sys
input=lambda:sys.stdin.readline().rstrip()
A = int(input())
cal = str(input())
B = int(input())
if cal == '*':
    print(A*B)
else:
    print(A+B)