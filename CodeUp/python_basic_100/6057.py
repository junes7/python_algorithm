# 참/거짓이 서로 같은 때에만 참 출력하기
# 2개의 정수값이 입력될 때, 그 불 값이
# 서로 같을 때에만 True를 출력하는 프로그램 작성
a, b = input().split()
a = bool(int(a))
b = bool(int(b))
print(((not a) and (not b)) or (a and b))