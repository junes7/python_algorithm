def solution(n):
    r=0
    for i in range(1,n):
        if n%i==1:
            r=i
            break
    return r