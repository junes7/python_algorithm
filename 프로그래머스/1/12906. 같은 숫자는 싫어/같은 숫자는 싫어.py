def solution(arr):
    r=[arr[0]]
    t=arr[0]
    for i in range(1,len(arr)):
        if arr[i]==t:
            continue;
        else:
            t=arr[i]
            r+=[arr[i]]
    return r