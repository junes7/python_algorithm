def solution(arr):
    n,m=len(arr),len(arr[0])
    if n<m:
        for i in range(m-n):
            arr.append([0]*m)
    else:
        for i in range(n):
            arr[i]+=[0]*(n-m)
    return arr