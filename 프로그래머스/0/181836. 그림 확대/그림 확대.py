def solution(p, k):
    # method1
    r=[]
    for i in range(len(p)):
        t=''
        for j in range(len(p[i])):
            t+=p[i][j]*k
        for _ in range(k):
            r.append(t)
    # method2
    r=[]
    for i in range(len(p)):
        r+=[p[i].replace('.','.'*k).replace('x','x'*k)]*k
    return r