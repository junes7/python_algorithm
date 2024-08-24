def solution(board, moves):
    # 사라진 인형 개수,보드 길이 변수 선언
    r,l=0,len(board)
    # 바구니 배열
    b=[]
    # 크레인 작동 위치 리스트 돌면서
    for m in moves:
        # row(행) 반복문 돌면서
        for i in range(l):
            # 보드 배열의 값이 0이 아니면
            if board[i][m-1]:
                # 바구니가 비어있거나 바구니 마자막 값과 보드 배열 값이
                # 같지 않으면 바구니에 보드 배열 값 추가 
                if not len(b) or b[-1]!=board[i][m-1]:
                    b+=[board[i][m-1]]
                # 바구니 마지막 값과 보드 배열 값이 같으면 바구니 마지막 값 삭제
                # 사라진 인형 개수 2개 count
                elif b[-1]==board[i][m-1]:
                    del b[-1]
                    r+=2
                # 보드 배열 값 0으로 치환 후 루프 빠져나옵니다.
                board[i][m-1]=0
                break          
    return r