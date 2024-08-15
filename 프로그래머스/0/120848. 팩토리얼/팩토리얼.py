def solution(n):
    i,m=1,1
    while m<=n:
        i+=1
        m*=i
    
    return i-1