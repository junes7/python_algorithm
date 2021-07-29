# 정수 2개 입력받아 자동 계산하기
# calculate automatically after input two integers
# 정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 모두 출력.
a,b=map(int,input().split())
print(a+b,a-b,a*b,a//b,a%b,round(a/b,2),sep='\n')