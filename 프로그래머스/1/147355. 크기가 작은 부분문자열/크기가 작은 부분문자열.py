def solution(t, p):
    r,l=0,len(p)
    for i in range(len(t)-l+1):
        if int(t[i:i+l])<=int(p):
            r+=1
    return r