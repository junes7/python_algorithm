# 거슬러 줘야 할 동전의 최소 개수를 구하라.
# 거스름돈 총 금액
n = 1260
count = 0
# 큰 단위의 화폐부터 차례대로 확인
coin_types = [500, 100, 50, 10]
for coin in coin_types:
    # 해당 화폐로 거슬러 줄 수 있는 동전의 개수 세기
    # 몫이 정수값으로 나와야 하기에 //를 넣어준다.
    count += n // coin
    n %= coin
    print(n)
print(count)