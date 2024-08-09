def solution(arr, flag):
    answer = []
    for i,b in enumerate(flag):
        if b:
            for j in range(arr[i]*2):
                answer.append(arr[i])
        else:
            for j in range(arr[i]):
                answer.pop()
    return answer