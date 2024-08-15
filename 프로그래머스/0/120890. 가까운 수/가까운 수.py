def solution(array, n):
    # method1
    # arr=sorted(array)
    # d=[abs(n-i) for i in arr]
    # r=arr[d.index(min(d))]
    # method2 sorted function
    r=sorted(array,key=lambda x:(abs(x-n),x))[0]
    return r