import sys
input=lambda:sys.stdin.readline().rstrip()
print(max([eval('*'.join([*map(str,input().split())])) for _ in range(int(input()))]))