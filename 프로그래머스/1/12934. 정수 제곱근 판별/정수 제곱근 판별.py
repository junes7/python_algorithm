def solution(n):
    t=n**0.5
    r=(t+1)**2 if int(t)==t else -1
    return r