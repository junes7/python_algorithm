# 정수 3개 입력받아 가장 작은 값 출력하기
# print the smallest value of three integers
# 정수 3개를 입력받아 가장 작은 값을 출력해 보자. 단, 3항 연산을 사용한다.
a,b,c=map(int,input().split())
# print(min(a,b,c))
print((a if a<b else b) if (a if a<b else b)<c else c)