import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
cookie_body = [input() for _ in range(N)]
heart = []
left_arm, right_arm, waist, left_leg, right_leg = 0, 0, 0, 0, 0
for i in range(N):
    for j in range(N):
        if cookie_body[i][j] == "*":
            heart = [i + 2, j + 1]
            break
    if len(heart) > 0:
        break
print(*heart)
for i in range(heart[1] - 1):
    if cookie_body[heart[0] - 1][i] == '*':
        left_arm += 1

for i in range(heart[1], N):
    if cookie_body[heart[0] - 1][i] == '*':
        right_arm += 1

length = 0
for i in range(heart[0], N):
    if cookie_body[i][heart[1] - 1] == '*':
        waist += 1
        length = i

for i in range(N - 1, length, -1):
    if cookie_body[i][heart[1] - 2] == "*":
        left_leg += 1

for i in range(N - 1, length, -1):
    if cookie_body[i][heart[1]] == "*":
        right_leg += 1
print(left_arm, right_arm, waist, left_leg, right_leg)