import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
print(st[:1]+st[1:-1]*2+st[-1])