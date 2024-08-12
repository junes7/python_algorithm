def solution(rank, attendance):
    r={}
    for i,b in enumerate(attendance):
        if b:
            r[i]=rank[i]
    r=sorted(r.items(),key=lambda x:x[1])
    return 10000*r[0][0]+100*r[1][0]+r[2][0]