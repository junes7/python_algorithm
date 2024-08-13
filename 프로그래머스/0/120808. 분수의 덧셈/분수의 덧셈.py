
def solution(numer1,denom1,numer2,denom2):
    numer=denom1*numer2+denom2*numer1
    denom=denom1*denom2
    gc=gcd(numer,denom)
    answer=[numer//gc,denom//gc]
    return answer

def gcd(x,y):
    if x%y==0:
        return y
    return gcd(y,x%y)