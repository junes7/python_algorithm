# 정수 1개 입력받아 카운트다운 출력하기 2
# method 1
# n = int(input())
# while n != 0:
#     n -= 1
#     print(n)
# method 2
n = int(input())
for i in range(n, 0, -1):
    print(i-1)