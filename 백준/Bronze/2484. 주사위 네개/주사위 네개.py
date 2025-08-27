import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
max_reward = 0
for _ in range(N):
    d1, d2, d3, d4 = sorted(map(int, sys.stdin.readline().split()))
    reward = 0
    if d1 == d2 == d3 == d4:
        reward = 50000 + (d1 * 5000)
    elif d1 == d2 == d3 or d2 == d3 == d4:
        reward = 10000 + (d2 * 1000)
    elif d1 == d2 and d3 == d4:
        reward = 2000 + (d1 * 500) + (d3 * 500)
    elif d1 == d2 or d2 == d3:
        reward = 1000 + (d2 * 100)
    elif d3 == d4:
        reward = 1000 + (d3 * 100)
    elif d1 != d2 != d3 != d4:
        reward = d4 * 100
    if max_reward < reward:
        max_reward = reward
print(max_reward)