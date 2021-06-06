# 거스름돈
# 카운터에는 거스름돈으로 사용할 500원, 100원,
# 50원, 10원짜리 동전이 무한히 존재한다고 가정
# 손님에게 거슬러 줘야 할 돈이 N원일 때, 거슬러
# 줘야 할 동전의 최소 개수를 구하라. 
# 거슬러 줘야 할 돈 N은 항상 10의 배수이다.
# '가장 큰 화폐 단위부터' 돈을 거슬러 주는 것
n = int(input()) # 1260원 가정
# method 1
# s = 0
# t = n // 500
# n %= 500
# s += t
# t = n // 100
# n %= 100
# s += t
# t = n // 50
# n %= 50
# s += t
# t = n // 10
# n %= 10
# s += t
# print('거슬러 줘야 할 동전의 최소 개수:', s)
# method 2
# coin_types = [500, 100, 50, 10]
# s = 0
# for coin in coin_types:
#     t = n // coin
#     n %= coin
#     s += t
# print('거슬러 줘야 할 동전의 최소 개수:', s)
# method 3
coin_types = [500, 100, 50, 10]
cnt = 0
for coin in coin_types:
    cnt += n // coin
    n %= coin
print('거슬러 줘야 할 동전의 최소 개수', cnt)