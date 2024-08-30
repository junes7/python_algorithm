def solution(want, number, discount):
    r=0
    wish=dict(zip(want,number))
    wish=sorted(wish.items())
    for i in range(len(discount)-10+1):
        t={}
        for j in range(i,i+10):
            if t.get(discount[j])==None:
                t[discount[j]]=1
            else:
                t[discount[j]]+=1
        t=sorted(t.items())
        if wish==t:
            r+=1
    return r