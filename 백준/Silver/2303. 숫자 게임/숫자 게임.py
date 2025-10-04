import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
score = []
for _ in range(N):
    card = list(map(int,input().split()))
    max_digit = 0
    for i in range(5-2):
        for j in range(i+1, 5-1):
            for m in range(j+1, 5):
                digit = (card[i]+card[j]+card[m])%10
                if digit >= max_digit:
                    max_digit = digit
    score.append(max_digit)
for i in range(N-1, -1, -1):
    if score[i] == max(score):
        print(i + 1)
        break