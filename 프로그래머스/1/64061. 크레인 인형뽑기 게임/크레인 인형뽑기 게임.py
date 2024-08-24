def solution(board, moves):
    r,l=0,len(board)
    b=[]
    for m in moves:
        for i in range(l):
            if board[i][m-1]:
                if not len(b) or b[-1]!=board[i][m-1]:
                    b+=[board[i][m-1]]
                elif len(b)!=0 or b[-1]==board[i][m-1]:
                    del b[-1]
                    r+=2
                board[i][m-1]=0
                break          
    return r