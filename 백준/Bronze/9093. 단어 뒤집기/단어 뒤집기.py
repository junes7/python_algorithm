import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    print(' '.join([c[::-1] for c in input().split()]))