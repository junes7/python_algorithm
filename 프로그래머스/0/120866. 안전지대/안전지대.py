def solution(board):
    r,n=0,len(board)
    # 위험지역 2로 변환
    for i in range(n):
        for j in range(n):
            if board[i][j]==1:
                sx=0 if i==0 else i-1
                ex=i if i==n-1 else i+1
                sy=0 if j==0 else j-1
                ey=j if j==n-1 else j+1
                for k in range(sx,ex+1):
                    for l in range(sy,ey+1):
                        if board[k][l]!=1:
                            board[k][l]=2
    # 안전지역 세기       
    for i in range(n):
        for j in range(n):
            if not board[i][j]:
                r+=1
    return r