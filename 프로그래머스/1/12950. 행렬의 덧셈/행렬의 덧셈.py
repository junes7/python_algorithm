def solution(arr1, arr2):
    r=[[0]*len(arr1[i]) for i in range(len(arr1))]
    for i in range(len(arr1)):
        for j in range(len(arr1[i])):
            r[i][j]=arr1[i][j]+arr2[i][j]
    return r