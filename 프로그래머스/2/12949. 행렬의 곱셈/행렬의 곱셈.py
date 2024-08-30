def solution(arr1, arr2):
    r=[]
    for i in range(len(arr1)):
        r+=[[]]
        for k in range(len(arr2[0])):
            s=0    
            for j in range(len(arr1[i])):
                s+=(arr1[i][j]*arr2[j][k])
            r[i]+=[s]
    return r