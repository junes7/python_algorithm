def solution(n):
    i=1
    while True:
        if (6*i)%n==0:
            r=i
            break
        i+=1
    return r