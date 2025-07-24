import sys
input=lambda:sys.stdin.readline().rstrip()
m=200-int(input())-1
print(0 if m<0 else m)