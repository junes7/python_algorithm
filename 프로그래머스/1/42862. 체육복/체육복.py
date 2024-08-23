def solution(n, lost, reserve):
    t={}
    lost=sorted(lost)
    reserve=sorted(reserve)
    for i in range(1,n+1):
        if i in reserve:
            if i not in lost:
                t[i]=2
            else:
                t[i]=1
        else:
            if i in lost:
                t[i]=0
            else:
                t[i]=1
    for i in reserve:
        if i in lost:
            continue
        else:
            if i-1 in lost and t[i-1]<1:
                t[i-1]+=1
                t[i]-=1
            elif i+1 in lost and t[i+1]<1:
                t[i+1]+=1
                t[i]-=1
    t=list(t.values())
    r=n-t.count(0)
    return r