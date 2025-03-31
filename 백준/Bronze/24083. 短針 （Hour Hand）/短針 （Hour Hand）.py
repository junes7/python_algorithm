import sys
input=lambda:sys.stdin.readline().rstrip()
a=int(input())
b=int(input())
val=(a+b)%12
print(12 if val==0 else val)