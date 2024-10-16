def solution(arr, queries):
    r=arr
    for s,e in queries:
        for i in range(s,e+1):
            r[i]+=1
    return r