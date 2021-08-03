# 성실한 개미(sincere ants)
# 10 * 10 크기의 미로 상자 구조와 먹이 위치가 입력된다. (0 : 이동할 수
# 있는 위치, 1 : 이동할 수 없는 벽 또는 장애물 위치, 2 : 먹이의 위치)
# (2,2) : 왕개미 출발 위치
# 성실한 개미의 예상 이동 경로를 9로 표시해 출력한다.
# (먹이를 찾고 멈추면, 그 위치를 9로 표시하고 출력한다.)
d=[[0]*12 for i in range(12)]
for i in range(1,11):
    d[i][1:11]=list(map(int,input().split()))
x,y=2,2
while True:
    if d[x][y]==0:
        d[x][y]=9
    elif d[x][y]==2:
        d[x][y]=9
        break
    if(d[x][y+1]==1 and d[x+1][y]==1)or(x==9 and y==9):
        break
    if d[x][y+1]!=1:
        y+=1
    elif d[x+1][y]!=1:
        x+=1
for i in range(1,11):
    for j in range(1,11):
        print(d[i][j],end=' ')
    print()