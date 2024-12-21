def solution(topping):
    r=0
    tp1,tp2=dict(),dict()
    for t in topping:
        if t not in tp1:
            tp1[t]=1
        else:
            tp1[t]+=1
    for t in topping:
        tp1[t]-=1
        if t not in tp2:
            tp2[t]=1
        else:
            tp2[t]+=1;
        if tp1[t]==0:
            del tp1[t]
        if len(tp1)==len(tp2):
            r+=1
    return r