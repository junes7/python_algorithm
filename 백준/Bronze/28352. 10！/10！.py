import sys
input=lambda:sys.stdin.readline().rstrip()
def facto(n):
    return 1 if n<=1 else n*facto(n-1)
print(facto(int(input()))//(60*60*24*7))