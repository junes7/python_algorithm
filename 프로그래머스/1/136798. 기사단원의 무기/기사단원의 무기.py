def solution(number, limit, power):
    # 1의 약수는 1 이므로
    r=1
    for n in range(2,number+1):
        t=[]
        for i in range(1,int(n**0.5)+1):
            if not n%i:
                t+=[i]
                if i**2!=n:
                    t+=[n//i]           
        r+=power if len(t)>limit else len(t)
    return r