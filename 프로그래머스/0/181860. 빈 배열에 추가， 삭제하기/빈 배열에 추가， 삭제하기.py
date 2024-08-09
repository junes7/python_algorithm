def solution(arr, flag):
    # method1
    # answer = []
    # for i,b in enumerate(flag):
    #     if b:
    #         for j in range(arr[i]*2):
    #             answer.append(arr[i])
    #     else:
    #         for j in range(arr[i]):
    #             answer.pop()
    # method2
    answer=[]
    for i,b in zip(arr,flag):
        if b:
            answer+=[i]*i*2
        else:
            answer=answer[:-i]
    return answer