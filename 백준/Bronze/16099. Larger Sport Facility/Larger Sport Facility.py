import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    lt,wt,le,we=map(int,input().split())
    print("Tie" if lt*wt==le*we else "Eurecom" if lt*wt<le*we else "TelecomParisTech")