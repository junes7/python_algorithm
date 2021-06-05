# 2차원 배열 순서대로 채우기 1-3
# 입력이 n인 경우 n*n 크기의 2차원 배열 출력
# 배열의 크기 입력 및 일정 간격 숫자 채우기
n = int(input())
b = []
t = 0
for i in range(n):
    t = i+1
    b.append([])
    for j in range(n):
        b[i].append(t)
        if j == n-1:
            break
        t += n
# 입력한 배열 확인
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()