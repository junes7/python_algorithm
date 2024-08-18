def solution(n):
    r,s='',0
    while n>0:
        r+=str(n%3)
        n//=3
    for i in range(len(r)-1,-1,-1):
        s+=int(r[i])*3**(len(r)-1-i)
    return s