## Chapter 3 그리디

### 거스름돈

* 손님에게 거슬러 줘야 할 돈이 N원일 때 거슬러줘야 할 동전의 최소 개수를 구하라. 단, 거슬러 줘야 할 돈 N은 항상 10의 배수이다.

```python
# 거슬러 줘야 할 동전의 최소 개수를 구하라.
# 거스름돈 총 금액
n = 1260
count = 0	# 동전의 개수 넣을 변수
# 큰 단위의 화폐부터 차례대로 확인
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



### 지뢰찾기(Minesweeper)

```python
row, col = map(int, input().split())
matrix = []
for i in range(row):
    matrix.append(list(input()))

print('입력 결과 확인:')
for i in matrix:
    for j in i:
        print(j, end='')
    print()
print('입력 결과 수정 후:')
for i in range(row):
    for j in range(col):
        if matrix[i][j] == '*':
            print(matrix[i][j], end='')
        else:
            count = 0
            for x in range(i-1, i+2):
                for y in range(j-1, j+2):
                    if x <0 or y < 0 or x >= row or y >= col:
                        continue
                    elif matrix[x][y] == '*':
                        count += 1
            print(count, end='')
    print()
# 실행 결과

```



### 숫자 카드 게임

* 숫자 카드 조건

1. 숫자가 쓰인 카드들이 N X M 형태로 놓여 있다. 이때 N: 행의 개수 M: 열의 개수
2. 먼저 뽑고자 하는 카드가 포함되어 있는 행을 선택
3. 선택된 행에 포함된 카드들 중 가장 숫자가 낮은 카드를 뽑아야 한다.
4. 처음에 카드를 골라낼 행을 선택할 때, 이후에 가장 숫자가 낮은 카드를 뽑을 것을 고려하여 최종적으로 가장 높은 숫자의 카드를 뽑을 수 있도록 전략을 세워야 한다.

```python
# 나의 방법
n, m = map(int, input().split())
matrix = []
for i in range(n):
    matrix.append(list(map(int, input().split())))
# 입력 결과 확인
print('입력 결과 확인:')
for i in matrix:
    for j in i:
        print(j, end=' ')
    print()
# 검사
min = 0
min_list = []
for i in range(n):
    min = matrix[i][0]
    print('min', min)
    for j in range(m):
        if matrix[i][j] < min:
            min = matrix[i][j]
    min_list.append(min)
print(max(min_list))

# 책의 방법
# min() 함수를 이용하는 답안
n, m = map(int, input().split())
result = 0
for i in range(n):
    data = list(map(int, input().split()))
    min_val = min(data)
    result = max(result, min_val)
print('결과:', result)
# 2중 반복문 구조를 이용하는 답안 예시
n, m = map(int, input().split())
result = 0
for i in range(n):
    data = list(map(int, input().split()))
    min_val = 1000
    for a in data:
        min_val = min(min_val, a)
    result = max(result, min_val)
print(result)
```



### 1이 될 때까지

* N에서 1을 뺀다.
* N을 K로 나눈다.

```python
# 내 풀이 방법
n, k = map(int, input().split())
count = 0
while True:
    if n == 1:
        break
    if n % k != 0:
        n -= 1
        count += 1
    elif n % k == 0:
        n//=k
        count += 1
print(count)
```



### Check Palindrome

```python
# inputString = "abcba"
inputString = "abca"
# result = False
inputString = list(inputString)
# method 1 use if, else statement
# if inputString == inputString[::-1]:
#     print(True)
# else:
#     print(False)
# method 2 use ternary operators(삼항 연산자)
result = (True if inputString == inputString[::-1] else False)
print(result)
```



