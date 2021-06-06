# 2차원 배열 순서대로 채우기 1-1
# 입력이 n인 경우 n*n 크기의 2차원 배열 출력
# 배열의 크기 입력
# method 1
n = int(input())
b=[]
t = 0
# n * n 공간 생성 및 채우기
for i in range(n):
    b.append([])
    for j in range(n):
        t += 1
        b[i].append(t)
# 채운 배열 출력
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()