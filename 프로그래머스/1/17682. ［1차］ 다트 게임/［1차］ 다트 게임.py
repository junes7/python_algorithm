def solution(dartResult):
    r=[]
    for i,c in enumerate(dartResult):
        if c in ['S','D','T']:
            if dartResult[i-2] in ['0','1','2','3']:
                n=int(dartResult[i-2:i])
            else:
                n=int(dartResult[i-1])
            r+=[{'S':n**1,'D':n**2,'T':n**3}.get(c)]
        if c=='#':
            r[-1]=-1*r[-1]
        elif c=='*':
            if len(r)==1:
                r[-1]=r[-1]*2
            else:
                r[-1]=r[-1]*2
                r[-2]=r[-2]*2
    return sum(r)