def solution(cards1, cards2, goal):
    # method1 카드 요소 순서대로 문장 조합 후 goal문장과 비교
    # r,idx=[],[-1]*2
    # for c in goal:
    #     if c in cards1:
    #         idx[0]+=1
    #         r+=[cards1[idx[0]]]
    #     elif c in cards2:
    #         idx[1]+=1
    #         r+=[cards2[idx[1]]]
    # r="Yes" if goal==r else "No"
    # method2 del함수로 매치되었을 때 요소 삭제
    r="Yes"
    for c in goal:
        if len(cards1)>0 and cards1[0]==c:
            del cards1[0]
        elif len(cards2)>0 and cards2[0]==c:
            del cards2[0]
        else:
            r="No"
    return r  