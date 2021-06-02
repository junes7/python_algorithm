# 하나라도 참이면 참 출력하기
# 그 불 값이 하나라도 True일 때에만
# True를 출력하는 프로그램을 작성
# OR Gate
# method 1
a, b = input().split()
print(bool(int(a)) or bool(int(b)))