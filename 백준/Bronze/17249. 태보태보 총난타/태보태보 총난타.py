import sys
input=lambda:sys.stdin.readline().rstrip()
l,r=input().split('(^0^)')
print(l.count('@'),r.count('@'))