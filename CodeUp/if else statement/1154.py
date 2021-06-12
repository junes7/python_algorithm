# 큰수 - 작은수
# 정수 두 개가 입력으로 들어오면
# 큰수 - 작은수의 값을 출력하시오.
# method 1
a, b = map(int, input().split())
print(a-b if a > b else b-a)