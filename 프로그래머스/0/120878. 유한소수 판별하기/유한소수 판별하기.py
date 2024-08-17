def solution(a,b):
    p,r=[],1
    d=b//gcd(a,b)
    # method1 길이로 소수 판별
    # for i in range(2,d+1):
    #     if d%i==0:
    #         t=[]
    #         for j in range(2,i+1):
    #             if i%j==0:
    #                 t+=[j]
    #         if len(t)==1:
    #             p+=[i]
    # method2 modulus로 소수 판별
    k=2
    while d>1:
        if d%k==0:
            if k not in p:
                p+=[k]
            d/=k
        else:
            k+=1
    for i in p:
        if i not in [2,5]:
            r=2
            break
    return r

def gcd(x,y):
    if x%y==0:
        return y
    else:
        return gcd(y,x%y)