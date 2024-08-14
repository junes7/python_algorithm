def solution(order):
    r=len(''.join(c for c in str(order) if c in '369'))
    return r