def solution(myString, pat):
    r=''
    for i in range(len(myString)-1,0,-1):
        if myString[i]==pat[-1]:
            r=myString[:i+1]        
            break
    return r