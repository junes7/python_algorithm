def solution(sides):
    # s=sorted(sides)
    # if longest side is s[-1] and if longest side is the rest
    # (s[-1]-(s[-1]-s[0]))+(s[-1]+s[0]-s[-1]-1)
    r=2*min(sides)-1
    return r