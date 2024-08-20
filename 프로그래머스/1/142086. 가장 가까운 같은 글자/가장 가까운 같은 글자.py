def solution(s): 
    r,t=[],{}
    for i,c in enumerate(s):
        if c not in t:
            t[c]=[i]
            r+=[-1]
        else:
            t[c]+=[i]
            r+=[t[c][-1]-t[c][-2]]
    return r