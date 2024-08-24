def solution(board, h, w):
    # count, board길이 변수 설정
    cnt,n=0,len(board)
    # 우상하좌 순서
    dh=[0,1,-1,0]
    dw=[1,0,0,-1]
    for i in range(4):
        h_check=h+dh[i]
        w_check=w+dw[i]
        if (0<=h_check and h_check<n) and (0<=w_check and w_check<n):
            if board[h][w]==board[h_check][w_check]:
                cnt+=1
    return cnt