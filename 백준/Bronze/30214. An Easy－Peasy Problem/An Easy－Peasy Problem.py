import sys
input=lambda:sys.stdin.readline().rstrip()
S1,S2=map(int,input().split())
print("E" if S1>=S2/2 else "H")