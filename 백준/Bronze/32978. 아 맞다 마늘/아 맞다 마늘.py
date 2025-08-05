import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
ingred=input().split()
used=input().split()
for c in ingred:
    if c not in used:
        print(c)
        break