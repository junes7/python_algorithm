def solution(s): 
    r,t=[],{}
    for i,c in enumerate(s):
        if c not in t:   
            r+=[-1]
        else:   
            r+=[i-t[c]]
        t[c]=i
    return r