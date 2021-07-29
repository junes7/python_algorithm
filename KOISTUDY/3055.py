# 정수 3개 입력받아 합과 평균 출력하기
# print sum and average of three integers
# 정수 3개를 입력받아 합과 평균을 출력해 보자.
a,b,c=map(int,input().split())
print(a+b+c,round((a+b+c)/3,2))