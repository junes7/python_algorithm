import sys
input=lambda:sys.stdin.readline().rstrip()
s=int(input())
ma,f,mb=map(int,input().split())
print("high speed rail" if s<=ma+f+mb or s<=240 else "flight")