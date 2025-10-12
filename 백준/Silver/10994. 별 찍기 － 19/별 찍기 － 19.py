import sys
input=lambda:sys.stdin.readline().rstrip()
star = int(input()) # 별 개수
length = (4*star)-3
map_array = [[' ']*(length) for _ in range(length)]
def star_19(n, x, y):
    # 재귀적으로 별 찍기
    global map_array
    
    length = (4*n)-3
    if length == 1:
        map_array[x][y] = "*"
        return
    else:    
        for i in range(length):
            map_array[x][y+i] = "*" # 윗변(1번 선분)
            map_array[y+i][x] = "*" # 좌측변(2번 선분)
            map_array[x+(length-1)][y+i] = "*" #아랫변(3번 선분)
            map_array[x+i][y+(length-1)] = "*" #우측변(4번 선분)
        n = n-1
        x = x+2
        y = y+2
        star_19(n, x, y)
        return
star_19(star, 0, 0)
for i in range(length):
    print(*map_array[i], sep = '')