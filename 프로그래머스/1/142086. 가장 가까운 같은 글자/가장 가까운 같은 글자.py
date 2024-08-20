def solution(s): 
    r,t=[],{}
    for i,c in enumerate(s):
        r+=[-1 if c not in t else i-t[c]]
        t[c]=i
    return r