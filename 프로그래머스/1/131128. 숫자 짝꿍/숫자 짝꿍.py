def solution(X, Y):
    t=[]
    for i in range(0,10):
        xcnt=X.count(str(i))
        ycnt=Y.count(str(i))
        if min(xcnt,ycnt)>0:
            t.extend(str(i)*(min(xcnt,ycnt)))
    r=''.join(sorted(t,reverse=True))
    r="-1" if not len(r) else "0" if r.startswith('0') else r
    return r