def solution(rank, attendance):
    r=sorted([(t,i) for i,t in enumerate(rank) if attendance[i]],key=lambda x:x[0])
    return 10000*r[0][1]+100*r[1][1]+r[2][1]