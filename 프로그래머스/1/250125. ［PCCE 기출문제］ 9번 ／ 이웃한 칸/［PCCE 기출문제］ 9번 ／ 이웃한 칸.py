def solution(board, h, w):
    # count, board길이 변수 설정
    cnt,n=0,len(board)
    # 우상하좌 순서
    dh=[0,1,-1,0]
    dw=[1,0,0,-1]
    for i in range(4):
        # 우상하좌 순서로 좌표 이동
        h_check=h+dh[i]
        w_check=w+dw[i]
        # h_check가 0 이상 n 미만이고 w_check가 0 이상 n 미만이라면
        if (0<=h_check and h_check<n) and (0<=w_check and w_check<n):
            # board[h][w]와 board[h_check][w_check]의 값이 동일하다면
            if board[h][w]==board[h_check][w_check]:
                # count값 1 증가
                cnt+=1
    return cnt