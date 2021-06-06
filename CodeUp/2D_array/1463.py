# 2차원 배열 순서대로 채우기
# 입력이 n인 경우 n*n 크기의 2차원 배열 출력
# 배열의 크기 입력 및 아래서부터 일정 간격 숫자 채우기
# method 1
n = int(input())
b = []
for i in range(n):
    t = n - i
    b.append([])
    for j in range(n):
        b[i].append(t)
        if j == n-1:
            break
        t += n
# 입력 값 확인
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()