def solution(s):
    r=''.join(sorted([c for c in s if s.count(c)==1]))
    return r