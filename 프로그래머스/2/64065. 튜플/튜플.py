def solution(s):
    r=[]
    s=sorted(s[2:-2].split('},{'),key=lambda x:(len(x),x))
    for i,e in enumerate(s):
        e=list(map(int,e.split(',')))
        if i==0:
            r+=e
        else:
            r+=list(set(e)-t)
        t=set(e)
    return r