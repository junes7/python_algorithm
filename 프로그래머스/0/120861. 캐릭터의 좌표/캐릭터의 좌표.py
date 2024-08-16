def solution(keyinput, board):
    r,m=[0]*2,[0]*4
    for i in range(len(board)):
        m[2*i]=-(board[i]-1)//2
        m[2*i+1]=(board[i]-1)//2
    for k in keyinput:
        if k=='left':
            if r[0]>m[0]:
                r[0]-=1
        elif k=='right':
            if r[0]<m[1]:
                r[0]+=1
        elif k=='down':
            if r[1]>m[2]:
                r[1]-=1
        else: # k=='up'
            if r[1]<m[3]:
                r[1]+=1
    return r