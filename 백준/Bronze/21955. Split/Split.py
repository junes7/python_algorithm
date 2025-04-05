import sys
input=lambda:sys.stdin.readline().rstrip()
n=input()
l=len(n)
print(n[:l//2],n[l//2:])