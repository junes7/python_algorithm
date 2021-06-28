# 숫자 피라미드 2 (print pyramid as a number)
# 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
# n이 5이면
# 5 5 5 5 5
# 4 4 4 4
# 3 3 3
# 2 2
# 1
# method 1
n = int(input())
for i in range(n-1, -1, -1):
    for j in range(i+1):
        print(i+1, end=' ')
    print()