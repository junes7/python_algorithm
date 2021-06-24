# 진격 후 결과(result after advance from bottom to top)
# 10*10 크기의 보드판이 있다. 각 말들은 제일 아래쪽에서 위쪽 방향으로
# 진격한다. 장애물은 0이 아닌 숫자로 나타내며, 0보다 크면 블럭 장애물,
# 0보다 작으면 구덩이 장애물, 0이면 평지이다.
# 10*10 보드판의 정보가 입력되고, 각 세로줄 아래에 말이 있으면 1,
# 없으면 0이 입력될 때 각 말의 생존여부를 구하는 프로그램을 구현하시오.
d = [[0] * 10 for i in range(10)]
for i in range(10):
    d[i] = list(map(int, input().split()))
s = list(map(int, input().split()))

for j in range(10):
    if s[j] == 1:
        for i in range(9, -1, -1):
            if d[i][j] > 0:
                print(j+1, 'crash')
                break
            elif d[i][j] < 0:
                print(j+1, 'fall')
                break
            else:
                if i == 0:
                    print(j+1, 'safe')
    else:
        continue