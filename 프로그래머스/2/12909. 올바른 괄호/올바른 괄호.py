def solution(s):
    t=[]
    for i in s:
        if i=='(':
            t+=[i]
        else: # i==')'
            if len(t) and t[-1]=='(':
                t.pop()
            else:
                t+=[i]
    return True if not len(t) else False