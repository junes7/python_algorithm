# 정수 3개 입력받아 짝수만 출력하기
# print even number of three integers
# 정수 3개를 입력받아 짝수만 출력해 보자.
a,b,c=map(int,input().split())
if a % 2 == 0:
    print(a)
if b % 2 == 0:
    print(b)
if c % 2 == 0:
    print(c)