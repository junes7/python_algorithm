def solution(s):
    r=[]
    while s!='':
        t,o=[s[0]],[]
        for i,c in enumerate(s):
            if i>0:
                if c==t[0]:
                    t+=[c]
                else:
                    if len(o)<len(t):
                        o+=c
                    if len(o)==len(t):
                        break        
        r+=[''.join(t+o)]
        s=s[len(t)+len(o):]
    return len(r)