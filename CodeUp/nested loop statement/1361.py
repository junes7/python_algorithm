# 별 계단 만들기
# n이 입력되면 n층의 별 계단을 출력하시오.
n = int(input())
a = 2
for i in range(n):
    if a <= n + 1:
        for j in range(a):
            if j < i:
                print(' ', end='')
            else:
                print('*', end='')
    a += 1
    print()