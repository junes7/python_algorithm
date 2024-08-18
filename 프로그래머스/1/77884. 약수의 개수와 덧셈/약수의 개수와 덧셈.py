def solution(left, right):
    r=0
    for n in range(left,right+1):
        t=[]
        for i in range(1,n+1):
            if n%i==0:
                t+=[i]
        r+=n if not len(t)%2 else -n     
    return r