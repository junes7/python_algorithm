def solution(n):
    r=0
    for i in range(n):
        r+=1
        while r%3==0 or '3' in str(r):
            r+=1 
    return r