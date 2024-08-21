def solution(N, stages):
    l,t=len(stages),{}
    for i in range(1,N+1):
        t[i]=0 if not l else stages.count(i)/l
        l-=stages.count(i)
    t=sorted(t.items(),key=lambda x:x[1],reverse=True)
    r=[n[0] for n in t]
    return r