import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print("V"*(n//5)+"I"*(n%5))