# 바둑알 십자 뒤집기
# 십자 뒤집기는 그 위치에 있는 모든 가로줄 돌의
# 색을 반대(1->0, 0->1)로 바꾼 후, 다시 그 위치에
# 있는 모든 세로줄 돌의 색을 반대로 바꾸는 것이다.
# 바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이
# 모두 꽉 채워져 놓여있을 때, n개의 좌표를 입력받아
# 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성
# ★ .append()로 값을 초기화 한 후 변경해줄 것
# method 1
# 바둑판 생성
d = []
for i in range(20):
    # 리스트 안에 리스트 추가하기
    d.append([])
    for j in range(20):
        d[i].append(0)
# 바둑판에 흰 돌(1) 또는 검정 돌(0) 모두 채우기
for i in range(1, 20):
    a = input().split()
    for j in range(1, 20):
        a[j-1] = int(a[j-1])
        d[i][j] = a[j-1]
# 입력 값 받기
# 십자 뒤집기 횟수(n)
n = int(input())
# 십자 뒤집기 좌표가 횟수(n)만큼 입력
for i in range(n):
    x, y = input().split()
    for j in range(1, 20):
        # 행에 대에 십자 뒤집기
        if d[j][int(y)]==0:
            d[j][int(y)]=1
        else:
            d[j][int(y)]=0
        # 열에 대해 십자 뒤집기
        if d[int(x)][j]==0:
            d[int(x)][j]=1
        else:
            d[int(x)][j]=0
# 십자 뒤집기 결과 출력
for i in range(1, 20):
    for j in range(1, 20):
        print(d[i][j], end=' ')
    print()