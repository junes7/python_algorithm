def solution(n, numlist):
    d = []
    for i in numlist:
        if i%n==0:
            d+=[i]
    return d