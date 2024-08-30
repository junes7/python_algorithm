def solution(clothes):
    r,cl=1,{}
    # c는 의상 이름, t는 의상 종류
    for c,t in clothes:
        if cl.get(t)==None:
            cl[t]=[c]
        else:
            cl[t]+=[c]
    for t in cl:
        r*=len(cl[t])+1
    return r-1