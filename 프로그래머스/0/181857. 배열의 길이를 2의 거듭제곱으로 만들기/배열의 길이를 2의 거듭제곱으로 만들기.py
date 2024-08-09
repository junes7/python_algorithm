def solution(arr):
    answer=arr
    n=0
    while 2**n<len(arr):
        n+=1
    answer+=[0]*(2**n-len(arr))
    return answer