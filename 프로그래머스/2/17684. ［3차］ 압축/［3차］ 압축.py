def solution(msg):
    r,i,idx=[],0,27
    dic=dict()
    for i in range(26):
        dic[chr(i+65)]=i+1
    i=0
    while i<len(msg):
        t,cnt="",0
        while i+cnt<len(msg) and t+msg[i+cnt] in dic:
            t+=msg[i+cnt]
            cnt+=1
        r+=[dic.get(t)]
        if i+cnt<len(msg):
            dic[t+msg[i+cnt]]=idx
            idx+=1
        i+=cnt
    return r