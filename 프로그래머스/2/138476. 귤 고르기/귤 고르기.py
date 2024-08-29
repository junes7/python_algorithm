def solution(k, tangerine):
    ocnt={}
    for n in tangerine:
        ocnt[n]=1 if ocnt.get(n)==None else ocnt[n]+1
    ocnt=sorted(ocnt.items(),key=lambda x:x[1],reverse=True)
    r,cnt=1,ocnt[0][1]
    for i in range(1,len(ocnt)):
        if cnt>=k:
            break
        else:
            cnt+=ocnt[i][1]
            r+=1
    return r