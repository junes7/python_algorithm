import sys
input=lambda:sys.stdin.readline().rstrip()
N, M = map(int, input().split())
J = int(input())
now = 1
apples = []
answer = 0
for _ in range(J):
    apples.append(int(input()))
for apple in apples:
    if now <= apple and now + (M-1) >= apple:
        pass
    elif now > apple:
        answer += abs(apple - now)
        now = apple
    else:
        answer += apple - (M-1) - now
        now = apple - (M-1)
print(answer)