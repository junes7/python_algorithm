def solution(n):
    r = 0
    for i in range(1 if n%2==1 else 2,n+1,2):
        r+=i if n%2==1 else i**2
    return r