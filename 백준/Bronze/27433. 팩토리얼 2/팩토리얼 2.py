import sys
def facto(n):
    return 1 if n<2 else n*facto(n-1);
n=int(sys.stdin.readline().rstrip())
print(facto(n))