def solution(players, callings):
    # 빠른 탐색을 위해 리스트에서 해시(딕셔너리로)로 전환 | player:index 형태
    player_rank={p:i for i,p in enumerate(players)}
    # 해설진이 부른 이름 리스트를 돌면서
    for na in callings:
        # 해시에 불린 이름 보내고 인덱스 값 받아옴
        t=player_rank[na]
        # 달리기 선수 등수 해시(딕셔너리)에 업데이트
        player_rank[na]-=1
        player_rank[players[t-1]]+=1
        # 등수에 맞게 선수들 리스트 업데이트
        players[t-1],players[t]=na,players[t-1]
    r=players
    return r