n,arr=9,[]
for _ in range(n):
    row=list(map(int,list(input())))
    arr+=[row]
zero=[(i,j) for i in range(n) for j in range(n) if arr[i][j]==0]
def is_possible(y,x,n):
    for i in range(9):
        if arr[y][i]==n:
            return False
        if arr[i][x]==n:
            return False
    ny=(y//3)*3
    nx=(x//3)*3
    for dy in range(3):
        for dx in range(3):
            if arr[ny+dy][nx+dx]==n:
                return False
    return True
def dfs(idx):
    if idx==len(zero):
        for row in arr:
            print(*row,sep='')
        exit(0)
    y,x=zero[idx]
    for i in range(1,10):
        if is_possible(y,x,i):
            arr[y][x]=i
            dfs(idx+1)
            arr[y][x]=0
dfs(0)