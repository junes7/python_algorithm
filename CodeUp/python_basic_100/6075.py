# 정수 1개 입력받아 그 수까지 출력하기 1
# 정수(0 ~ 100) 1개를 입력받아 0부터
# 그 수까지 순서대로 출력해보자
# method 1
n = int(input())
t = 0
while t <= n:
    print(t)
    t += 1 
# method 2
# n = int(input())
# for t in range(n+1):
#     print(t)