def solution(name, yearning, photo):
    r=[]
    for p in photo:
        s=0
        for n in p:
            if n in name:
                s+=yearning[name.index(n)]
        r+=[s]
    return r