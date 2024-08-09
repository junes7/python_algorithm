def solution(myString, pat):
    for i in range(len(myString)-1,0,-1):
        if myString[i]==pat[-1]:
            e=i
            break
    answer=myString[:e+1]
    return answer