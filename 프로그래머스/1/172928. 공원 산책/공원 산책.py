def solution(park, routes):
    # 좌표 변수 선언
    x,y=0,0
    # 방향 해시 코드
    d={'E':[0,1],'N':[-1,0],'S':[1,0],'W':[0,-1]}
    # 시작 좌표 찾기
    for i,s in enumerate(park):
        if s.find('S')!=-1:
            x=i
            y=s.find('S')
            break
    # 수행할 명령 리스트를 돌면서
    for w in routes:
        i,m=w.split()
        # 벗어난 범위 또는 장애물 플래그 변수 선언
        obs=False
        dx=d[i][0]*int(m)
        dy=d[i][1]*int(m)
        # 범위를 벗어났을 때
        if x+dx<0 or x+dx>=len(park) or y+dy<0 or y+dy>=len(park[0]):
            obs=True
        else:
            # 명령의 방향이 남 또는 북쪽일 때
            if i=='S' or i=='N':
                # 명령 방향으로 이동하면서 장애물 찾기
                for k in range(x,x+dx+d[i][0],d[i][0]):
                    if park[k][y]=='X':
                        obs=True
                        break
                # 장애물이 없을 때
                if not obs:
                    x+=dx
            # 명령의 방향이 동 또는 서쪽일 때
            else: # elif i=='E' or i=='W':
                # 명령 방향으로 이동하면서 장애물 찾기
                for j in range(y,y+dy+d[i][1],d[i][1]):
                    if park[x][j]=='X':
                        obs=True
                        break
                # 장애물이 없을 때
                if not obs:
                    y+=dy
    r=[x,y]
    return r