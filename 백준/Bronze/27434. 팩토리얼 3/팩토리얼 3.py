import sys
sys.setrecursionlimit(10**5)
def facto(n):
    return 1 if n==0 else n*facto(n-1)
input=lambda:sys.stdin.readline().rstrip()
print(facto(int(input())))