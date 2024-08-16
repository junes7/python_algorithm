def solution(balls, share):
    # combination(조합) 구현
    if balls>share:
        sh=min(share,balls-share)
        if sh==0:
            sh=balls-share
        n,d=balls,sh
        for i in range(1,sh):
            n*=(balls-i)
            d*=(sh-i)
        r=n/d
    else:
        r=1
    return r