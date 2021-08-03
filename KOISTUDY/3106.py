# 바둑알 십자 뒤집기
# flip baduk-piece as cross with
# 집에서 다른 가족들을 기다리던 영일이는 바둑알을 바둑판에 꽉 채워 깔아
# 놓고 놀다가 ..."바둑알 십(+)자 뒤집기를 만들어 볼까?"라는 생각을 하게
# 되었다.
# 어떤 위치를 골라서 십자 뒤집기를 하면, 그 위치의 가로줄에 있는 모든
# 바둑돌의 색을 반대(1->0, 0->1)로 바꾼 후, 그 위치의 세로줄에 있는 모든
# 바둑돌의 색을 반대로 바꾸는 것이다. 그 위치에 있는 바둑돌을 제외하고 그
# 가로/세로줄에 있는 모든 바둑돌 색이 반대로 바뀌게 된다.
# 흰(1) 돌과 검정(0) 돌이 꽉 채워져 있는 19 * 19 크기의 바둑판 상태와
# n개의 십자 뒤집기 좌표가 입력될 때, 십자 뒤집기를 수행한 결과를 출력.
d=[]
for i in range(19):
    d.append(list(map(int,input().split())))
for i in range(int(input())):
    x,y=map(int,input().split())
    for j in range(19):
        if d[j][y-1]==0:
            d[j][y-1]=1
        else:
            d[j][y-1]=0
        if d[x-1][j]==0:
            d[x-1][j]=1
        else:
            d[x-1][j]=0
for i in range(19):
    for j in range(19):
        print(d[i][j],end=' ')
    print()

# d[j][y-1]=1 if d[j][y-1]==0 else 0
# d[x-1][j]=1 if d[x-1][j]==0 else 0