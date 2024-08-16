def solution(score):
    t=[(i,(s[0]+s[1])/2) for i,s in enumerate(score)]
    r=sorted(t,key=lambda x:x[1],reverse=True)
    k,m,s=1,101,0
    for i in range(len(r)):
        if m>r[i][1]:
            m=r[i][1]
            k+=(i-s)
            s=i
        t[r[i][0]]=k
    return t