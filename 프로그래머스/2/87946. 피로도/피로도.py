def solution(k, dungeons):
    from itertools import permutations as p
    r,l=[],len(dungeons)
    for e in p(range(l)):
        t,s=k,0
        for i in list(e):
            if t>=dungeons[i][0]:
                t-=dungeons[i][1]
                s+=1
        r+=[s]
        if s==l:
            break  
    return max(r)