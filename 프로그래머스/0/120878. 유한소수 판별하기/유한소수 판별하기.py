def solution(a,b):
    p,r=[],1
    d=b//gcd(a,b)
    print(d)
    for i in range(2,d+1):
        if d%i==0:
            t=[]
            for j in range(2,i+1):
                if i%j==0:
                    t+=[j]
            if len(t)==1:
                p+=[i]
    print(p)
    for i in p:
        if i not in [2,5]:
            r=2
            break
    return r

def gcd(x,y):
    if x%y==0:
        return y
    else:
        return gcd(y,x%y)