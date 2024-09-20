def solution(n, control):
    r=n
    c={'w':1,'s':-1,'d':10,'a':-10}
    for i in control:
        r+=c[i]
    return r