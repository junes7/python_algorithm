def solution(board, k):
    # method1
    # answer = 0
    # for i in range(len(board)):
    #     for j in range(len(board[i])):
    #         if i+j<=k:
    #             answer+=board[i][j]
    # method2
    answer=sum([board[i][j] for i in range(len(board)) for j in range(len(board[i])) if i+j<=k])
    return answer