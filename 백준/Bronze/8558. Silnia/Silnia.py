import sys
input=lambda:sys.stdin.readline().rstrip()
from math import factorial
n=int(input())
print(str(factorial(n))[-1])