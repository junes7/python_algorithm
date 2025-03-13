import sys
input=lambda:sys.stdin.readline().rstrip()
Sab=int(input())
Fab=int(input())
print("flight" if Sab>Fab else "high speed rail")