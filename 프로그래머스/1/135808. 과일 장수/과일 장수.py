def solution(k, m, score):
    r=0
    s=sorted(score,reverse=True)
    for i in range(len(s)//m):
        r+=min(s[m*i:m*(i+1)])*m*1
    return r