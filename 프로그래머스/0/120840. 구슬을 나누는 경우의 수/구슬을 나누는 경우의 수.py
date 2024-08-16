def solution(balls, share):
    # method1 combination(조합) 구현
    # if share!=0 and balls>share:
    #     sh=min(share,balls-share)      
    #     n,d=balls,sh
    #     for i in range(1,sh):
    #         n*=(balls-i)
    #         d*=(sh-i)
    #     r=n/d
    # else:
    #     r=1
    # method2 math 라이브러리 comb함수 이용
    from math import comb
    r=comb(balls,share)
    return r