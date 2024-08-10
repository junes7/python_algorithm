def solution(arr):
    s,e=-1,-1
    for i in range(len(arr)):
        if arr[i]==2:
            s=i
            break
    for i in range(len(arr)-1,-1,-1):
        if arr[i]==2:
            e=i
            break
    answer=[-1] if s==-1 and e==-1 else arr[s:e+1]
    return answer