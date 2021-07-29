# 실수 2개 입력받아 거듭제곱 계산하기
# calculate power of two real numbers
# 실수 2개(f1, f2)를 입력받아 f1을 f2번 거듭제곱한 값을 출력해 보자.
# (*4.0을 0.5번 거듭제곱한 값은? (4.0)1/2 를 의미하고, 이는 4.0의
# 제곱근을 의미한다.)
# method 1
a,b=map(float,input().split())
print(pow(a,b))
# method 2
# a,b=input().split()
# print(float(a)*float(b))