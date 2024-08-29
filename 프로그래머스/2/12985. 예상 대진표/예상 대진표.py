def solution(n,a,b):
    r=0
    while a!=b:
        a=(a+1)/2 if a%2 else a/2
        b=(b+1)/2 if b%2 else b/2
        r+=1
    return r