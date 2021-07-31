# 정수 2개 입력받아 큰 값 출력하기
# print large value of two integers
# 정수 2개를 입력받아 큰 값을 출력해 보자. 단, 3항 연산을 사용한다.
a,b=map(int,input().split())
print(a if a>b else b)