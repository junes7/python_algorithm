def solution(progresses, speeds):
    th,t=0,{}
    for p,s in zip(progresses,speeds):
        if (100-p)/s>(100-p)//s:
            d=(100-p)//s+1
        else:
            d=(100-p)//s
        if not len(t):
            th=d
            t[d]=1
        else:
            if d<=th:
                t[th]+=1
            else: # d>th
                th=d
                t[d]=1
    r=list(t.values())
    return r