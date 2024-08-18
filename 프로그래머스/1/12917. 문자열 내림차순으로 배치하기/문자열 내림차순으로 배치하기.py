def solution(s):
    up,lo=[],[]
    for c in s:
        if c.isupper():
            up+=[c]
        else:
            lo+=[c]
    up=sorted(up,reverse=True)
    lo=sorted(lo,reverse=True)
    r=''.join(lo+up)
    return r