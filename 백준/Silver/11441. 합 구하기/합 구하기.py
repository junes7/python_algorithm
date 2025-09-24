import sys
input = sys.stdin.readline
N = int(input())
nums = list(map(int, input().split()))
ans = [0]*(N+1)
for i in range(1, N+1):
    ans[i] = ans[i-1]+nums[i-1]
for _ in range(int(input())):
    i, j = map(int, input().split())
    sys.stdout.write(str(ans[j]-ans[i-1])+"\n")