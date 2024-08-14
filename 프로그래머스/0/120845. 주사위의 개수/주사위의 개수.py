def solution(box, n):
    r=eval('*'.join(str(i//n) for i in box))
    return r