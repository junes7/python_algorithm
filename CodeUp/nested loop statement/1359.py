# 숫자 피라미드 1 (print pyramid as a number)
# 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
# n이 5이면
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
# method 1
n = int(input())
for i in range(1, n+1):
    for i in range(i):
        print(i+1, end=' ')
    print()