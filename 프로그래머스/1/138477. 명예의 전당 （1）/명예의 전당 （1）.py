def solution(k, score):
    r,t=[],[]
    for i,s in enumerate(score):
        if i<k:
            t+=[s]
        else:
            for j,n in enumerate(t):
                if s>n:
                    t[j]=s
                    break
        t.sort()
        r+=[t[0]]
    return r