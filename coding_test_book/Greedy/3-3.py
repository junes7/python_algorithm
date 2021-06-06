# min() 함수를 이용하는 답안
n, m = map(int, input().split())

# 책의 방법
result = 0
for i in range(n):
    data = list(map(int, input().split()))
    min_val = min(data)
    result = max(result, min_val)
print('결과:', result)

# 나의 방법
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