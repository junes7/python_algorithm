import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=input().split()
print(bin(int(a,2)+int(b,2))[2:])