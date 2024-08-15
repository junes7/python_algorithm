def solution(n):
    r=len([k for k in range(4,n+1) if len([i for i in range(1,k+1) if not k%i])>=3])
    return r