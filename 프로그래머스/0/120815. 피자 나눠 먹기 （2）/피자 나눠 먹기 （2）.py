def solution(n):
    # method1
    # i=1
    # while True:
    #     if (6*i)%n==0:
    #         r=i
    #         break
    #     i+=1
    # method2
    import math
    return n//math.gcd(6,n)