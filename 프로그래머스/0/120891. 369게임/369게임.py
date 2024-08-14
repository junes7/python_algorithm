def solution(order):
    r=len(''.join(c for c in str(order) if c in ['3','6','9']))
    return r