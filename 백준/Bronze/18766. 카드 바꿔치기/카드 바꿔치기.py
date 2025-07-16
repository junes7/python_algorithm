import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    gram_before=sorted(input().split())
    gram_after=sorted(input().split())
    print("CHEATER"if gram_before!=gram_after else "NOT CHEATER")