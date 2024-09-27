def solution(arr, intervals):
    r=[i for a,b in intervals for i in arr[a:b+1]]
    return r