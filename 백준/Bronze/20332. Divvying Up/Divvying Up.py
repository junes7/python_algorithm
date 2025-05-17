import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
w = sum(map(int, input().split()))
if w % 3 == 0:
    print('yes')
else:
    print('no')