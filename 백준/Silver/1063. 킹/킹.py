import sys
input=lambda:sys.stdin.readline().rstrip()
king, stone, N = input().split()
k = list(map(int, [ord(king[0]) - 64, king[1]]))
s = list(map(int, [ord(stone[0]) - 64, stone[1]]))
#이때 k와 s는 [1,1] [8,8]
# 딕셔너리 (이동 타입에 따라 dx와 dy 설정)
move = {'R': [1, 0], 'L': [-1, 0], 'B': [0, -1], 'T': [0, 1], 'RT': [1, 1], 'LT': [-1, 1], 'RB': [1, -1], 'LB': [-1, -1]}
# 움직이는 횟수 만큼 실행
for _ in range(int(N)):
    m = input() #지금 이동
    # 움직였을 경우의 위치 : nx, ny
    nx = k[0] + move[m][0] 
    ny = k[1] + move[m][1]
    # 킹 조건 검사
    if 0 < nx <= 8 and 0 < ny <= 8:
    	# 돌 위에 얹히는가?
        if nx == s[0] and ny == s[1]:
            sx = s[0] + move[m][0]
            sy = s[1] + move[m][1]
            # 돌 조건 검사
            if 0 < sx <= 8 and 0 < sy <= 8:
                k = [nx, ny] # 킹 이동
                s = [sx, sy] # 돌 이동 
        else:
            k = [nx, ny] # 킹만 이동
print(f'{chr(k[0] + 64)}{k[1]}')
print(f'{chr(s[0] + 64)}{s[1]}')