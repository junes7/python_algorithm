# 둘 다 거짓일 경우만 참 출력하기
# 2개의 정수값이 입력될 때, 그 불 값이
# 모두 False일 때에만
# True를 출력하는 프로그램 작성
# method 1
a, b = input().split()
a = bool(int(a))
b = bool(int(b))
print(not (a or b))