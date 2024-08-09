def solution(myString, pat):
    s,l=len(pat),len(myString)
    answer=0
    for i in range(l):
        if i+s==l+1:
            break
        else:
            if myString[i:i+s]==pat:
                answer+=1
    return answer