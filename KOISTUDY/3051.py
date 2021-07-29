# 정수 2개 입력받아 나눈 나머지 계산하기
# calculate divided remainder of two integers
# 정수 2개(a, b)를 입력받아 a를 b로 나눈 나머지를 출력해보자.
# (*10을 3으로 나눴을 때의 몫은 3이고, 나머지는 1이다.)
# method 1
a,b=map(int,input().split())
print(a%b)