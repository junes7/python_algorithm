import sys
input=lambda:sys.stdin.readline().rstrip()
name=[input() for _ in range(int(input()))]
print("INCREASING" if name==sorted(name) else "DECREASING" if name==sorted(name,reverse=True) else "NEITHER")