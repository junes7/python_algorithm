def solution(cards1, cards2, goal):
    r,idx=[],[-1]*2
    for c in goal:
        if c in cards1:
            idx[0]+=1
            r+=[cards1[idx[0]]]
        elif c in cards2:
            idx[1]+=1
            r+=[cards2[idx[1]]]
    return "Yes" if goal==r else "No"