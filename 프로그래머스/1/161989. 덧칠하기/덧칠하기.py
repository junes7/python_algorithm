def solution(n, m, section):
    r=1
    s=section[0]
    for i in section:
        if s+m-1<i:
            s=i
            r+=1
    return r