def solution(array, n):
    arr=sorted(array)
    d=[abs(n-i) for i in arr]
    # print(d)
    r=arr[d.index(min(d))]
    return r