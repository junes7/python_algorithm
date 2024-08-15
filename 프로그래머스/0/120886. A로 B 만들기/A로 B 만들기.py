def solution(before, after):
    r=1 if sorted(before)==sorted(after) else 0
    return r