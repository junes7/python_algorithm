def solution(arr):
    # method1 with sum function
    # r=sum(arr)/len(arr)
    # method2 without sum function
    s=0
    for i in arr:
        s+=i
    r=s/len(arr)
    return r