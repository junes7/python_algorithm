import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for i in range(t):
    orig,chan=input().split()
    print("ERROR" if orig != chan else "OK")