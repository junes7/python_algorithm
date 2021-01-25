## Chapter 3 그리디

### 거스름돈

* 손님에게 거슬러 줘야 할 돈이 N원일 때 거슬러줘야 할 동전의 최소 개수를 구하라. 단, 거슬러 줘야 할 돈 N은 항상 10의 배수이다.

```python
n = 1260
count = 0	# 동전의 개수 넣을 변수
coin_types = [500, 100, 50, 10]
for coin in coin_types:
    count += n // coin
    n %= coin
print(count)
# 실행 결과
6개
```



### 큰 수의 법칙

* 첫째 줄에 N(2 ≤ N ≤ 1000), M(1 ≤ M ≤ 10000), K(1 ≤ K ≤ 10000)의 자연수가 주어지며, 각 자연수는 공백으로 구분한다.
* 입력으로 주어지는 K는 항상 M보다 작거나 같다. 

```python
n, m, k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
first = data[n-1]
second = data[n-2]
result = 0
while True:
    for i in range(k):
        if m == 0:
            break
        result += first
        m -= 1
    if m == 0:
        break
    result += second
    m -= 1
print(result)
```

