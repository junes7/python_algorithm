def solution(n):
    r=[]
    # method1 약수의 약수 길이로 소수 판단
    # for i in range(2,n+1):
    #     k=[]
    #     if not n%i:
    #         k=[j for j in range(2,i+1) if not i%j]
    #         if len(k)==1:
    #             r+=[i]
    # method2 single while statement
    d=2
    while n>1:
        if not n%d:
            n/=d
            if d not in r:
                r+=[d]
        else:
            d+=1
    return r