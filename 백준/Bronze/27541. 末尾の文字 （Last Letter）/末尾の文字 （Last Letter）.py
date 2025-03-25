import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s=input()
if s[-1]=='G':
    print(s[:-1])
elif s[-1]!='G':
    print(s+"G")