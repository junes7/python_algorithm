def solution(arr, queries):
    for s,e,k in queries:
        m=arr[s:e+1]
        for i,t in enumerate(m):
            if k>0 and (s+i)%k==0:
                arr[s+i]+=1
    answer = arr
    return answer