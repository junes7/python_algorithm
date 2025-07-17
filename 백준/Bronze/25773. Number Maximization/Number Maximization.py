import sys
input=lambda:sys.stdin.readline().rstrip()
n=sorted([*input()],reverse=True)
print(''.join(n))