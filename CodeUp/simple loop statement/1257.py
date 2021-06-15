# 두 수 사이의 홀수 출력하기
# 시작수와 마지막 수가 입력되면 시작수부터 마지막
# 수까지의 모든 홀수를 출력.
a, b = map(int, input().split())
for i in range(a, b+1):
    if i % 2 == 1:
        print(i, end=' ')