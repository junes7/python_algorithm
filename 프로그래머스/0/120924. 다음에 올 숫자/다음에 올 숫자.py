def solution(c):
    r=c[-1]+(c[1]-c[0]) if c[1]-c[0]==c[2]-c[1] else c[-1]*(c[1]//c[0])
    return r