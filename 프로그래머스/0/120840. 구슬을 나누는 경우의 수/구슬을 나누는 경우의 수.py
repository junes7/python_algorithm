def solution(balls, share):
    # combination(조합) 구현
    if share!=0 and balls>share:
        sh=min(share,balls-share)      
        n,d=balls,sh
        for i in range(1,sh):
            n*=(balls-i)
            d*=(sh-i)
        r=n/d
    else:
        r=1
    return r