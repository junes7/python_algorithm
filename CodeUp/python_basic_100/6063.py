# 정수 2개 입력받아 큰 값 출력하기
# 입력된 두 정수(a, b) 중 큰 값을
# 출력하는 프로그램을 3항 연산자 사용해 구현
# method 1
# a, b = input().split()
# print(a if int(a)>=int(b) else b)
# method 2
a, b = input().split()
a = int(a)
b = int(b)
c = (a if a >= b else b)
print(c)