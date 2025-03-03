import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(n):
    pw=input()
    print("yes" if 6<=len(pw)<=9 else "no")