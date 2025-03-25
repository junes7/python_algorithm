import sys
input=lambda:sys.stdin.readline().rstrip()
sA,sB=0,0
for i in range(3):
    sA+=int(input())*(3-i)
for i in range(3):
    sB+=int(input())*(3-i)
print('T' if sA==sB else 'A' if sA>sB else 'B')