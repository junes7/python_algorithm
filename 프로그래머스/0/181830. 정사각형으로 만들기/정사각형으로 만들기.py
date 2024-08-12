def solution(arr):
    m=arr
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if len(arr)>len(arr[i]):
                m[i]+=[0]*(len(arr)-len(arr[i]))
    if len(arr)<len(arr[0]):
        for i in range(len(arr[0])-len(arr)):
            m.append([0]*len(arr[0]))
    return m