def solution(arr, flag):
    answer=[]
    # method1
    # for i,b in enumerate(flag):
    #     if b:
    #         answer+=[arr[i]]*arr[i]*2
    #     else:
    #         for j in range(arr[i]):
    #             answer.pop()
    # method2
    for i,b in zip(arr,flag):
        if b:
            answer+=[i]*i*2
        else:
            answer=answer[:-i]
    return answer