# 숫자 피라미드 3 (print pyramid as a number)
# 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
# n이 5이면
# 15
# 14 13
# 12 11 10
# 9 8 7 6
# 5 4 3 2 1
# method 1
n = int(input())
s = n * (n+1) // 2
for i in range(1, n+1):
    for j in range(i):
        print(s, end=' ')
        s -= 1
    print()