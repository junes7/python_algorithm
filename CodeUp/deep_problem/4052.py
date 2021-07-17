# 숫자의 자릿값(place value of number)
# 임의의 10개의 양의 정수가 입력된다.
# 입력된 수의 각 자릿값을 더하여 나온 값 중에서 최댓값과 최솟값을 출력하는
# 프로그램을 작성하시오.
# 예를 들어 12 14 29 99 28 37 28 20 38 39 일 경우, 최댓값은 99에서
# 9+9 = 18이 되고, 최솟값은 20에서 2+0 = 2가 된다.
# 1. 10개의 양의 정수가 공백으로 분리되어 입력된다.
# 2. 각 숫자의 범위는 1~1,000,000이다.
# 첫 줄에 최댓값과 최솟값을 공백으로 구분하여 출력한다.
# method 1
d = list(input().split())
max, min = 0, 10000
for i in range(len(d)):
    s = 0
    for j in range(len(d[i])):
        s += int(d[i][j])
    if max < s:
        max = s
    if min > s:
        min = s
print(max, min)