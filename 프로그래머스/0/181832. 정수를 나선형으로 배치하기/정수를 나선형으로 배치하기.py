def solution(n):
    arr = [[0]*n for i in range(n)]
    # direction, element, y axis, x axis
    d,e,y,x=0,1,0,0
    # direction element list
    dy=[0,1,0,-1]
    dx=[1,0,-1,0]
    while e <= n*n:
        arr[y][x]=e
        e+=1
        # boundary condition
        if x+dx[d]<0 or y+dy[d]<0 or x+dx[d]>=n or y+dy[d]>=n or arr[y+dy[d]][x+dx[d]]!=0:
            d=(d+1)%4
        y=y+dy[d]
        x=x+dx[d]
    return arr