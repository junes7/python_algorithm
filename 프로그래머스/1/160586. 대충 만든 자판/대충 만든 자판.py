def solution(keymap, targets):
    r=[]
    for tar in targets:
        s=0
        for j,c in enumerate(tar):
            t=[]
            for m in keymap:
                if m.find(c)!=-1:
                    t+=[m.find(c)+1]
            if not len(t):
                s=0
                break
            else: 
                s+=min(t)
        r+=[-1 if not s else s]
    return r