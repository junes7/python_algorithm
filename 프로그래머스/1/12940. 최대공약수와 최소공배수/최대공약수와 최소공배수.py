def solution(n, m):
    gc=gcd(n,m)
    r=[gc,(n//gc)*(m//gc)*gc]
    return r

def gcd(x,y):
    if x%y==0:
        return y
    else:
        return gcd(y,x%y)