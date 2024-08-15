def solution(n):
    r=[]
    for i in range(2,n+1):
        k=[]
        if not n%i:
            k=[j for j in range(2,i+1) if not i%j]
            if len(k)==1:
                r+=[i]
    return r