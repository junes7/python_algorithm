def solution(arr, idx):
    # method1
    # answer=-1
    # for i in range(idx,len(arr)):
    #     if arr[i]==1:
    #         answer=i
    #         break
    # method2
    try:
        r=arr.index(1,idx)
    except:
        r=-1    
    return r