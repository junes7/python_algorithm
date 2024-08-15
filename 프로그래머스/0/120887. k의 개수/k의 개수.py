def solution(i, j, k):
    r=sum([str(n).count(str(k)) for n in range(i,j+1)])
    return r