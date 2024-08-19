def solution(numbers):
    r=[]
    from itertools import combinations
    for i in combinations(numbers,2):
        if sum(i) not in r:
            r+=[sum(i)]
    r=sorted(r)
    return r