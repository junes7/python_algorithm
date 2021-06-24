# 숫자 등고선(number contour line)
# 어느날 등산을 하다가 길을 찾기 위해 지도를 보다가 땅의 높낮이가
# 표시되어 있는 등고선을 보면서 문득 2차원 배열로 숫자등고선을 만드는
# 문제가 생각났다. 여러분들은 배열크기 N과 시작위치 X, Y를 입력받아
# 숫자등고선을 만드시오. 예를 들어 배열크기가 5이고 시작위치가 3, 4
# 라면 3, 4로 시작하는 다음과 같은 숫자등고선을 만들 수 있다.
# 6 5 4 3 4
# 5 4 3 2 3
# 4 3 2 1 2
# 5 4 3 2 3
# 6 5 4 3 4
# 배열의 크기 N의 범위는 1<=N<=100이며 좌표값 X, Y는 배열크기보다 작다.
# 숫자등고선을 출력한다. 숫자와 숫자 사이는 공백을 출력한다.
# method 1
n = int(input())
d = [[0] * n for i in range(n)]
i, j = map(int, input().split())
def abs(num):
    return num if num > 0 else -num
def get_num(a, b):
    return abs(a-(i-1)) + abs(b-(j-1)) + 1
for x in range(n):
    for y in range(n):
        print(get_num(x, y), end=' ')
    print()