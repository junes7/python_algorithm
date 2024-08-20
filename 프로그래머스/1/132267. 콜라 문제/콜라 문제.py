def solution(a, b, n):
    r=0
    while n>=2:
        if n//a==0:
            break
        r+=(n//a)*b
        n=(n//a)*b+n%a
    return r