# 성실한 개미(sincere ants)
# 10 * 10 크기의 미로 상자의 구조와 먹이의 위치가 입력된다.
# 성실한 개미가 이동한 경로를 9로 표시해 출력한다.
# 미로 상자 생성
d = []
for i in range(10):
    d.append([])
    for j in range(10):
        d[i].append(0)

# 미로 상자 경로 채우기
for i in range(10):
    a = input().split()
    for j in range(10):
       a[j] = int(a[j])
       d[i][j] = a[j]
# 성실한 개미가 이동한 경로 9로 표시하기
x, y = 1, 1
d[x][y]=9
while True:
    if x == 9 and y == 9:
        break
    else:
        if d[x][y+1] == 0:
            d[x][y+1]=9
            y += 1
        elif d[x][y+1] == 1:
            if d[x+1][y] == 0:
                d[x+1][y]=9
                x += 1
            elif d[x+1][y] == 2:
                d[x+1][y]=9
                break
            else: # d[x+1][y] == 1:
                break
        elif d[x][y+1] == 2:
            d[x][y+1]=9
            break
# 미로 상자 확인
for i in range(10):
    for j in range(10):
        print(d[i][j], end=' ')
    print()