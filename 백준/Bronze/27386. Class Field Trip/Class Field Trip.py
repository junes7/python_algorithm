import sys
input=lambda:sys.stdin.readline().rstrip()
a=input()
b=input()
print(''.join(sorted([*(a+b)])))