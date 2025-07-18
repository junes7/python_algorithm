import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
fork_cnt=sorted([*map(int,input().split())])
print(sum(fork_cnt[0:2]))