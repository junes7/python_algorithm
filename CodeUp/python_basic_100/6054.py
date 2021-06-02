# 둘 다 참일 경우만 참 출력하기
# 2개의 정수값이 입력될 때,
# 그 불 값이 모두 True일 때에만 True를 출력
# AND Gate
# method 1
a, b = input().split()
print(bool(int(a)) and bool(int(b)))