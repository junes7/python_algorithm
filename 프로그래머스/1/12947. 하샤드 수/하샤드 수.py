def solution(x):
    s=sum([int(c) for c in str(x)])
    return True if not x%s else False