import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
print(chr(97+(7 if n%8==0 else n%8-1))+str(n//8 if n%8==0 else n//8+1))