def solution(s):
    t=s.split()
    c=t.copy()
    for i in range(len(t)):
        if 'Z' in t[i]:
            del c[c.index('Z')-1]
            del c[c.index('Z')]
    r=0 if len(c)==0 else sum(list(map(int,c)))
    return r