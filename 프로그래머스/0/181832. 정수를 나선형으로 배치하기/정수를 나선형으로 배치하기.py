def solution(n):
    arr = [[0]*n for i in range(n)] 
    dy=[0,1,0,-1]
    dx=[1,0,-1,0]
    # direction, element
    d,e=0,1
    # y axis x axis
    y,x=0,0
    while e <= n*n:
        ny=y+dy[d]
        nx=x+dx[d]
        arr[y][x]=e
        e+=1
        if nx<0 or ny<0 or ny>=n or nx>=n or arr[ny][nx]!=0:
            d=(d+1)%4
            ny=y+dy[d]
            nx=x+dx[d]
        y=ny
        x=nx
    return arr