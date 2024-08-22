def solution(s):
    r=0
    while s!='':
        t,o=1,0
        for i,c in enumerate(s):
            if i>0:
                if c==s[0]:
                    t+=1
                else:
                    if o<t:
                        o+=1
                    if o==t:
                        break        
        r+=1
        s=s[t+o:]
    return r