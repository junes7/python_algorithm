def solution(a, b):
    r=0
    # swap
    if a>b:
        t=a
        a=b
        b=t
    # sum
    for i in range(a,b+1):
        r+=i
    return r