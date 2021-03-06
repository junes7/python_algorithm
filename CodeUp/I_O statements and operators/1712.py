# 등차 수열(arithmetic sequence)
# 등차 수열은 일정한 값을 더해서 다음 항이 결정되는 수열을 말한다. 등차수열 예)
# 1, 3, 5, 7, 9 ... 첫항이 1이고, 공차(=두 수 사이 간격)가 2인 등차수열
# 4, 9, 14, 19, 24, ... 첫항이 4이고, 공차가 5인 등차수열
# 입력으로 첫항, 둘째항, k값이 주어졌을 때, 이 등차수열의 첫번째 항부터 k값
# 이하의 항까지 출력하시오.
# 첫 항, 둘째 항, k값이 공백을 기준으로 차례대로 입력된다.(int 범위의 정수만
# 입력됨) | 첫 항부터 k값 이하의 항까지 공백으로 구분하여 출력하시오.
# method 1
a, b, k = map(int, input().split())
for i in range(a, k+1, b-a):
    print(i, end=' ')