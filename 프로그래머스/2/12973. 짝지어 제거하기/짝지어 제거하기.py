def solution(s):
    r,al=-1,[]
    # 스택을 이용해 구현
    for c in s:
        if not len(al):
            al+=[c]
        else:
            if al[-1]==c:
                del al[-1]
            else:
                al+=[c]
    r=1 if not len(al) else 0
    return r