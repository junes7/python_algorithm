def solution(arr, intervals):
    answer = [i for a,b in intervals for i in arr[a:b+1]]
    return answer