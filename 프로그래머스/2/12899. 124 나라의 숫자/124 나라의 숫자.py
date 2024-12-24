def solution(n):
    from collections import deque
    r,deq='',deque()
    while(n>0):
        deq.appendleft(n%3)
        n//=3
    while 0 in deq:
        for i in range(1,len(deq)):
            if deq[i]==0:
                deq[i]=4
                deq[i-1]=2 if deq[i-1]==4 else 1 if deq[i-1]==2 else 0
                # if deq[i-1]==4:
                #     deq[i-1]=2
                # elif deq[i-1]==2:
                #     deq[i-1]=1
                # elif deq[i-1]==1:
                #     deq[i-1]=0
        if deq[0]==0:
            deq.popleft()

    for n in deq:
        r+=str(n)
    return r