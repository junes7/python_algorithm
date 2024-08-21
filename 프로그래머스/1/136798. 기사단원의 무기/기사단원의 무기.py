def solution(number, limit, power):
    r=1
    for n in range(2,number+1):
        # 에라토스테네스의 체 이용
        t=[]
        for i in range(1,int(n**0.5)+1):
            if not n%i:
                t+=[i]
                if i**2!=n:
                    t+=[n//i]
        r+=power if len(t)>limit else len(t)
    return r