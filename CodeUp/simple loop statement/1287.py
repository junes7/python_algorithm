# 구구단을 *로 출력하기
# 구구단을 입력받아 *로 출력하라.
# method 1
n = int(input())
for i in range(1, 10):
    print('*' * (n*i), sep='')