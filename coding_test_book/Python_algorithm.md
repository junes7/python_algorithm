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
# method 1
n, k = map(int, input().split())
result = 0
# N이 K 이상이라면 K로 계속 나누기
while n >= k:
    # N이 K로 나누어 떨어지지 않는다면 N에서 1씩 빼기
    while n % k != 0:
        n -= 1
        result += 1
    n //= k
    result += 1
# 마지막으로 나눈 수에 대하여 1씩 빼기
while n > 1:
    n -= 1
    result += 1
print(result)
# method 2
# N이 K의 배수가 되도록 효율적으로 한 번에 빼는 방식
n, k = map(int, input().split())
result = 0

while True:
    # (N == K 로 나누어 떨어지는 수)가 될 때까지 1씩 빼기
    target = (n // k) *k
    result += (n - target)
    n = target
    # N이 K보다 작을 때(더 이상 나눌 수 없을 때) 반복문 탈출
    if n < k:
        break
    # K로 나누기
    result += 1
    n //= k
# 마지막으로 남은 수에 대하여 1씩 빼기
result += (n - 1)
print(result)
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



### 상하좌우(Up Down Left Right)

* 계획서에는 하나의 줄에 띄어쓰기를 기준으로 하여 L, R, U, D 중 하나의 문자가 반복적으로 적혀 있다. 각 문자의 의미는 다음과 같다.
  * L: 왼쪽으로 한 칸 이동
  * R: 오른쪽으로 한 칸 이동
  * U: 위로 한 칸 이동
  * D: 아래로 한 칸 이동

* 첫째 줄에 공간의 크기를 나타내는 N이 주어진다. (1 ≤ N ≤ 100)
* 둘째 줄에 여행자 A가 이동할 계획서 내용이 주어진다. (1 ≤ 이동 횟수 ≤ 100)

```python
n = int(input())
move_plans = input().split()
x, y = 1, 1
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']

for plan in move_plans:
    for i in range(len(move_types)):
        if plan == move_types[i]:
            nx = x + dx[i]
            ny = y + dy[i]
    if nx < 1 or ny < 1 or nx > n or ny > n:
        continue
    x, y = nx, ny
print('최종 결과:')
print(x, y)
# 입력
5
R R R U D D
# 실행 결과
최종 결과:
3 4
```

* 오류 정리: `n = input()`이라고 했을 때 `if nx < 1 or ny < 1 or nx > n or ny > n:`이 부분에서 이런 에러가 난다.

```python
Traceback (most recent call last):
  File "4-1.py", line 12, in <module>
    if nx < 1 or ny < 1 or nx > n or ny > n:
TypeError: '>' not supported between instances of 'int' and 'str'
```

* 그러므로 항상 데이터 타입 체크해주고 여기는 `n = int(input())`로 수정해준다.



### 시각

* 정수 N이 입력되면 00시 00분 00초부터 N시 59분 59초까지의 모든 시각 중에서 3이 하나라도 포함되는 모든 경우의 수를 구하는 프로그램을 작성하시오. 예를 들어 1을 입력했을 때 다음은 3이 하나라도 포함되어 있으므로 세어야 하는 시각이다.
  * 00시 00분 03초
  * 00시 13분 30초
* 반면에 다음은 3이 하나도 포함되어 있지 않으므로 세면 안 되는 시각이다.
  * 00시 02분 55초
  * 01시 27분 45초

* 입력 조건: 첫째 줄에 정수 N이 입력된다.(0 ≤ N ≤ 23)
* 출력 조건: 00시 00분 00초부터 N시 59분 59초까지의 모든 시각 중에서 3이 하나라도 포함되는 모든 경우의 수를 출력한다.
* `if '3' in <str>time:`이 핵심이다.

```python
# 다음 중 시각에 3이 하나라도 포함되어 있으면 세어라.
n = int(input())
result = 0
for h in range(n+1):
    for m in range(60):
        for s in range(60):
            if '3' in str(h) + str(m) + str(s):
                result += 1
print(result)
# 입력
5
# 실행 결과
11475
```



### 왕실의 나이트

* 이처럼 8 X 8 좌표 평면상에서 나이트의 위치가 주어졌을 때 나이트가 이동할 수 있는 경우의 수를 출력하는 프로그램을 작성하시오. 이때 왕실의 정원에서 행 위치를 표현할 때는 1부터 8로 표현하며, 열 위치를 표현할 때는 a부터 h로 표현된다.

* 예를 들어 만약 나이트가 a1에 있을 때 이동할 수 있는 경우의 수는 다음 2가지이다. a1의 위치는 좌표 평면에서 구석의 위치에 해당하며 나이트는 정원의 밖으로는 나갈 수 없기 때문이다.

  1. 오른쪽으로 두 칸 이동 후 아래로 한 칸 이동하기(c2)

  2. 아래로 두 칸 이동 후 오른쪽으로 한 칸 이동하기(c3)

* ord 함수는 문자열을 아스키 코드로 변환해준다. 

```python
# 왕실의 나이트
input_data = input()
row = int(input_data[1])
column = int(ord(input_data[0])) - int(ord('a')) + 1

steps = [(-2, -1), (-1, -2), (1, -2), (2, -1), (2, 1), (1, 2), (-1, 2), (-2, 1)]
result = 0
for step in steps:
    next_row = row + step[1]
    next_column = column + step[0]
    if next_row >= 1 and next_row <= 8 and next_column >= 1 and next_column <= 8:
        result += 1
print(result)
```



### 게임 개발

* 첫째 줄에 맵의 세로 크기 N과 가로 크기 M을 공백으로 구분하여 입력한다. (3 ≤ N, M ≤ 50)
* 둘째 줄에 게임 캐릭터가 있는 칸의 좌표 (A, B)와  바라보는 방향 d가 각각 서로 공백으로 구분하여 주어진다. 방향 d의 값으로는 다음과 같이 4가지가 존재한다.
  * 0: 북쪽
  * 1: 동쪽
  * 2: 남쪽
  * 3: 서쪽





### 선택 정렬(Selection Sort)

* 이 중에서 가장 작은 데이터를 선택해 맨 앞에 있는 데이터와 바꾸고, 그 다음 작은 데이터를 선택해 앞에서 두 번째 데이터와 바꾸는 과정을 반복하면 어떨까? → 가장 작은 것을 선택

```python
# Selection Sort
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(len(array)):
    min_idx = i
    for j in range(i+1, len(array)):
        if array[min_idx] > array[j]:
            min_idx = j
	array[i], array[min_idx] = array[min_idx], array[i]
print(array)
# 실행 결과
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```



### 삽입 정렬(Insertion Sort)

* 데이터를 하나씩 확인하며, 각 데이터를 적절한 위치에 삽입

* 자기보다 작은 데이터를 만나면 그 위치에서 멈춤

```python
# Insertion Sort
array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
for i in range(1, len(array)):
    for j in range(i, 0, -1):
        if array[j] < array[j-1]:
            array[j], array[j-1] = array[j-1], array[j]
        else:
            break
print(array)
# 실행 결과
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```







