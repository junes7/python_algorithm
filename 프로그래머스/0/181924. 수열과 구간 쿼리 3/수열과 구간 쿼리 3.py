def solution(arr, queries):
    for q in queries:
        t=arr[q[0]]
        arr[q[0]]=arr[q[1]]
        arr[q[1]]=t
    answer=arr
    return answer