# 마름모 출력하기(print diamond)
# 이번엔 n이 입력되면 대각선 2개의 길이가 2n인 마름모를 출력하시오.
n = int(input())
m = n + 2
a, b = n, n+1
for i in range(1, n*2+1):
    if i <= n:
        for j in range(1, m):
            if j == a or j == b:
                print('*', end='')
            else:
                print(' ', end='')
        a -= 1
        b += 1
        m += 1
    else:
        a += 1
        b -= 1
        m -= 1
        for j in range(1, m):
            if j == a or j == b:
                print('*', end='')
            else:
                print(' ', end='')
    print()