def solution(box, n):
    r=1
    for i in box:
        r*=i//n
    return r