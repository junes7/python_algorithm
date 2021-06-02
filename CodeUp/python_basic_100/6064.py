# 정수 3개 입력받아 가장 작은 값 출력하기
# 입력된 세 정수 a, b, c 중 가장 작은 값을
# 출력하는 프로그램을 3항 연산 사용해 구현
# method 1
a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
# 가장 큰 값 계산
# print((a if a > b else b) if ((a if a > b else b) > c) else c)
# 가장 작은 값 계산
print((a if a < b else b) if ((a if a < b else b) < c) else c)