import sys
input=lambda:sys.stdin.readline().rstrip()
def facto(n):
    return 1 if n==1 else n*facto(n-1)
for _ in range(int(input())):
    print(str(facto(int(input())))[-1])