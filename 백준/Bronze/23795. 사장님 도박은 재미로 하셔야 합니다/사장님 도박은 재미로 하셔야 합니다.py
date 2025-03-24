import sys
input=lambda:sys.stdin.readline().rstrip()
s=0
while True:
    t=int(input())
    if t==-1: break
    s+=t
print(s)