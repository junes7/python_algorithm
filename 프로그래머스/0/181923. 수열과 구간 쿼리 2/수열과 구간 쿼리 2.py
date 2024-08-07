def solution(arr, queries):
    r=[]
    for s,e,k in queries:
        t=arr[s:e+1]
        m=k
        t.sort()
        if len(t)==0:
            r.append(-1)
        else:
            for i in t:
                if i>k:
                    m=i
                    break
            r.append(-1 if k==m else m)
    return r