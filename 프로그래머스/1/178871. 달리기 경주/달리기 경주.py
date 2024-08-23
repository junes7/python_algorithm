

def solution(players, callings):
    player_rank={p:i for i,p in enumerate(players)}
    for na in callings:
        t=player_rank[na]
        player_rank[na]-=1
        player_rank[players[t-1]]+=1
        players[t-1],players[t]=na,players[t-1]
    r=players
    return r