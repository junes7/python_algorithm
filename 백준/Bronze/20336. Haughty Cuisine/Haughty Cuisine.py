import sys
input=lambda:sys.stdin.readline().rstrip()
menu=[input().split() for _ in range(int(input()))]
for m in menu[0]:
    print(m)