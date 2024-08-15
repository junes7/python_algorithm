def solution(emergency):
    s=sorted(emergency,reverse=True)
    r=[s.index(n)+1 for n in emergency]
    return r