def solution(a, b, n):
    r=0
    while n//a>0:
            r+=(n//a)*b
            n=(n//a)*b+n%a
    return r