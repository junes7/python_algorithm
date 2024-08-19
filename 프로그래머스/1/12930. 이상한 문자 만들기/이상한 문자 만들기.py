def solution(s):
    r=''
    s=s.split(' ')
    for i,c in enumerate(s):
        for j in range(len(c)):
            if not j&1:
                r+=c[j].upper()
            else:
                r+=c[j].lower()
        if i<len(s)-1:
            r+=' '
    return r