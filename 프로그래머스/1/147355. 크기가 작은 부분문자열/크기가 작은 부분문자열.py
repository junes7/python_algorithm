def solution(t, p):
    r=0
    for i in range(len(t)-len(p)+1):
        if int(t[i:i+len(p)])<=int(p):
            r+=1
    return r