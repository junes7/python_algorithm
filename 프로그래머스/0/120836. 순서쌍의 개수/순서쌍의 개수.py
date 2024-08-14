def solution(n):
    r=len([i for i in range(1,n+1) if not n%i])
    return r