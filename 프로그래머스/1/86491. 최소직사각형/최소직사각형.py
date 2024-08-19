def solution(sizes):
    m1,m2=0,0
    for s in sizes:
        if s[0]<s[::-1][0]:
            s=s[::-1]
        if m1<s[0]:
            m1=s[0]
        if m2<s[1]:
            m2=s[1]
    return m1*m2