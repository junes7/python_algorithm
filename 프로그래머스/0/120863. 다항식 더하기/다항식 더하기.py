def solution(polynomial):
    a,b=0,0
    e=polynomial.split()
    for i in range(0,len(e),2):
        if 'x' in e[i]:
            a+=1 if len(e[i])<2 else int(e[i][:-1])
        else:
            b+=int(e[i])
    if a<2:
        r=str(b) if a<1 else ('x' if b==0 else 'x + '+str(b))
    else:
        r=str(a)+'x' if b==0 else str(a)+'x + '+str(b)
    return r