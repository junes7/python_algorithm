def solution(spell, dic):
    r=2
    for c in dic:
        s=0
        for i in spell:
            if i in c:
                s+=1
        if s==len(spell):
            r=1
            break
    return r