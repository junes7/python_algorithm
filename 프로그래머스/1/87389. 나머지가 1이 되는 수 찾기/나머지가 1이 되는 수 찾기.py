def solution(n):
    r=[i for i in range(1,n) if n%i==1][0]
    return r