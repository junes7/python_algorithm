import sys
input=lambda:sys.stdin.readline().rstrip()
A,P=map(int,input().split())
print("lika" if A*7==P*13 else "Axel" if A*7>P*13 else "Petra")