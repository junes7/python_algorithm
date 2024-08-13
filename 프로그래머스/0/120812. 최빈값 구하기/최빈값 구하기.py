def solution(array):
    l={n:array.count(n) for n in set(array)}
    r=sorted(l.items(),key=lambda x:x[1],reverse=True)
    cnt=0
    for i,(k,v) in enumerate(r):
        if r[i][1]==r[0][1]:
            cnt+=1   
    return -1 if cnt>1 else r[0][0]