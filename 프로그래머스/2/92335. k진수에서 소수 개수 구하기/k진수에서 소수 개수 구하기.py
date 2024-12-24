def solution(n, k):
    from collections import deque
    r,t=0,''
    # 진수 변환
    while n>0:
        t=str(n%k)+t
        n//=k
    t=t.split('0')
    for num in t:
        if num!='' and is_prime(int(num)):
            r+=1
    return r

def is_prime(num):
    if num<2:
        return False
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            return False
    return True