# 나도 IQ 150(I also have IQ 150)
# 각 행의 제일 첫 번째 숫자들만 주어지면 N크기의 모든 격자판 정보를
# 출력하는 프로그램을 작성하시오.
# 첫 줄에 이 삼각격자의 세로 길이 N이 입력된다.
# 둘째 줄부터 N+1째 줄까지 (k, 1)의 격자판의 정보가 입력된다.
# N 크기의 삼각 격자판을 출력하시오.(각 행의 마지막에 공백 넣어 출력)
# method 1
n = int(input())
d = []
for i in range(n):
    d.append([])
    for j in range(i+1):
        d[i].append(0)

for j in range(n):
    for i in range(j, n):
        if j == 0:
            d[i][j] = int(input())
        else:
            d[i][j] = d[i][j-1] - d[i-1][j-1]

for x in range(n):
    for y in range(x+1):
        print(d[x][y], end=' ')
    print()