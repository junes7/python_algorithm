def solution(arr, idx):
    # answer=-1
    # for i in range(idx,len(arr)):
    #     if arr[i]==1:
    #         answer=i
    #         break
    try:
        answer=arr.index(1,idx)
    except:
        answer=-1
    
    return answer