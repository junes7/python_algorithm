# 바둑판에 흰 돌 놓기
# put white baduk-piece on the board
# 기숙사 생활을 하는 학교를 다니는 영일이는 어떤 금요일에 집으로 귀가를
# 했다. 오랜만에 집에 간 영일이는 친구와 함께 하던 매우 큰 판의 오목에
# 대해서 생각해보다가 "바둑 프로그램을 만들어 볼까?"라는 생각을 하게
# 되었다.
# 19 * 19 크기의 바둑판에 n개의 흰 돌을 놓았을 때, 바둑판의 상태를 출력해
# 보자.
n=int(input())
d=[[0]*20 for i in range(20)]
for i in range(n):
    a,b=map(int,input().split())
    d[a][b]=1
for x in range(1,20):
    for y in range(1,20):
        print(d[x][y],end=' ')
    print()