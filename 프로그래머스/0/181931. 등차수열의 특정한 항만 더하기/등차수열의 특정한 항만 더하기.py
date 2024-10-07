def solution(a, d, included):
    r=0
    for i,t in enumerate(included):
        if t:
            r+=a+d*i
    return r