def solution(strArr):
    l=[len(c) for c in strArr]
    gcnt=[l.count(i) for i in range(1,max(l)+1)]
    return max(gcnt)