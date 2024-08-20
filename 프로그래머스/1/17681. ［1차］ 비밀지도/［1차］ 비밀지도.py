def solution(n, arr1, arr2):
    r=[str(bin(arr1[i]|arr2[i])[2:]).zfill(n).replace('1','#').replace('0',' ') for i in range(n)]
    return r