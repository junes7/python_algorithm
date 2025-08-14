import sys
input=lambda:sys.stdin.readline().rstrip()
x, y = map(int,input().split())
doro = [list(map(int, input().split())) for _ in range(x)]
#doro 리스트에 받은 값들을 2차원 배열로 저장한다.
a = []
for i in range(x):
    for j in range(y):
        if doro[i][j] == 1:     #1이 나온다면
            if len(a) == 0:     #a에 아무 값도 저장이 되어있지 않다면
                a = [i+1,j+1]   #a에 할당
            else:               #a에 이미 값이 있다면 b에 할당
                b = [i+1,j+1]   
print(abs(b[0] - a[0]) + abs(b[1] - a[1]))  #계산. abs는 절댓값 내장함수