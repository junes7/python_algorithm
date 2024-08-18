def solution(n):
    t=n**0.5
    # method1 int함수 사용
    # r=(t+1)**2 if int(t)==t else -1
    # method2 modulus 사용
    r=(t+1)**2 if t%1==0 else -1
    return r