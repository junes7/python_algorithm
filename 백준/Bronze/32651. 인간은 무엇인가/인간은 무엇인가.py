import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print("Yes" if n<=100000 and n%2024==0 else "No")