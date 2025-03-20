import sys
input=lambda:sys.stdin.readline().rstrip()
eq=input().split()
s=int(eq[0])+int(eq[2])
print("YES" if s==int(eq[4]) else "NO")