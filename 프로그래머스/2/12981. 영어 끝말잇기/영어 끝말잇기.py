def solution(n, words):
    r,used=[],[]
    for i,word in enumerate(words):
        if not len(used):
            used+=[word]
        else:
            if word not in used:
                if used[-1][-1]==word[0]:
                    used+=[word]
                else:
                    r+=[i%n+1,i//n+1]
                    break
            else:
                r+=[i%n+1,i//n+1]
                break
    if not len(r):
        r+=[0,0]
    return r