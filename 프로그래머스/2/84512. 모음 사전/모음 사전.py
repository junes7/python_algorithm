def solution(word):
    r,s=0,0
    vow={'A':0,'E':1,'I':2,'O':3,'U':4}
    d=[]
    for i in range(5):
        s+=5**i;
        d+=[s]
    d.sort(reverse=True);
    for i,t in enumerate(word):
        r+=vow.get(t)*d[i]+1
    return r