def solution(s):
    r=0
    from collections import deque
    deq=deque(s)
    for i in range(len(deq)):
        t=[]
        for c in deq:
            if not len(t):
                t+=[c]
            else:
                if (c==']' and t[-1]=='[') or (c==')' and t[-1]=='(') or (c=='}' and t[-1]=='{'):
                    del t[-1]
                else:
                    t+=[c]
        if not len(t):
            r+=1
        deq+=[deq.popleft()]
    return r