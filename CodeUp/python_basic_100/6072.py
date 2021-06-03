# 정수 1개 입력받아 카운트다운 출력하기 1
# 정수(1 ~ 100)중 1개가 입력되었을 때 
# 카운트다운을 출력해보자
# method 1
# n = int(input())
# while n != 0:
#     print(n)
#     n -= 1
# method 2
n = int(input())
for i in range(n, 0, -1):
    print(i)