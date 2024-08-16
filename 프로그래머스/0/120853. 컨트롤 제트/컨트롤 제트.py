def solution(s):
    t=s.split()
    for i,c in enumerate(s.split()):
        if 'Z' in c:
            del t[t.index('Z')-1]
            del t[t.index('Z')]
    r=0 if len(t)==0 else sum(list(map(int,t)))
    return r