import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    n = int(input())
    if n == 0: break
    rank_list = [int(input()) for _ in range(n)]
    for rank in reversed(rank_list):
        print(rank)
    print(0)