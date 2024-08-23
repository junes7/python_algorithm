def solution(d, budget):
    d=sorted(d)
    t=[]
    for i in d:
        if budget-i>=0:
            t+=[i]
            budget-=i
    r=len(t) 
    return r