import sys
input=lambda:sys.stdin.readline().rstrip()
l=int(input())
print(l//5+(0 if l%5==0 else 1))