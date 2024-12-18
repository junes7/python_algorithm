def solution(brown, yellow):
    r=[]
    # 카펫의 총 크기
    total=brown+yellow
    # 노란 격자 위 아래로 갈색 격자가 존재하기 때문에 column의 최소 개수는 3입니다.
    # 3부터 총 크기까지 반복문을 돌면서
    for col in range(3,total+1):
        row=total//col
        # 너비*높이가 카펫 크기와 동일하고 너비가 높이보다 크거나 같을 때 
        # 맨 위, 맨 아래 2줄, 맨 앞, 맨 뒤 2줄을 빼면 노란색 격자가 되기에
        # (너비-2)*(높이-2)==노란색 격자 크기가 되어야 합니다.
        # if row*col==total and row>=col and (row-2)*(col-2)==yellow:
        if(row-2)*(col-2)==yellow:
            r+=[row,col]
            break
    return r