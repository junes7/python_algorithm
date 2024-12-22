from collections import deque

def solution(maps):    
    x,y=1,1
    add=[0]*len(maps[0])
    # print(add)
    goal=[len(maps),len(maps[0])]
    maps.insert(0,add)
    # print(goal,maps)
    for m in maps:
        m.insert(0,0)
        m.insert(len(maps[0]),0)
        # print(m)
    maps+=[add]
    maps[1][1]=0
    queue=deque([(x,y,1)])
    dx=[0,1,0,-1]
    dy=[1,0,-1,0]
    # print(queue)
    while queue:
        x,y,cnt=queue.popleft()
        if x==goal[0] and y==goal[1]:
            return cnt
        for rx,ry in zip(dx,dy):
            nx=x+rx
            ny=y+ry
            if(maps[nx][ny]==1):
                maps[nx][ny]=0
                queue.append((nx,ny,cnt+1))   
    return -1