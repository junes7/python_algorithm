import sys
input=lambda:sys.stdin.readline().rstrip()
A=int(input())
B=int(input())
C=int(input())
D=int(input())
E=int(input())
print(abs(A)*C+D+B*E if A<0 else (B-A)*E)