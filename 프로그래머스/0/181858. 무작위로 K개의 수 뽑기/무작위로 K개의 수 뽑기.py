def solution(arr, k):
    l=[]
    for n in arr:
        if n not in l and len(l) < k:
            l.append(n)
    if len(l) < k:
        for i in range(k-len(l)):
            l.append(-1)
    return l