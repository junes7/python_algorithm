def solution(strArr):
    # method1
    # answer=[]
    # for i in range(len(strArr)):
    #     if i%2==0:
    #         answer.append(strArr[i].lower())
    #     else:
    #         answer.append(strArr[i].upper())
    # method2
    answer=[strArr[i].lower() if i%2==0 else strArr[i].upper() for i in range(len(strArr))]
    return answer