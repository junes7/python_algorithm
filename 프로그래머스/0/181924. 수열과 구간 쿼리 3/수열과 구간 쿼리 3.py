def solution(arr, queries):
    # for q in queries:
    #     # t=arr[q[0]]
    #     # arr[q[0]]=arr[q[1]]
    #     # arr[q[1]]=t
    #     arr[q[0]],arr[q[1]]=arr[q[1]],arr[q[0]]
    for i,j in queries:
        arr[i],arr[j]=arr[j],arr[i]
    answer=arr
    return answer