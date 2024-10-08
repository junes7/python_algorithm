def solution(binomial):
    # method1
    # answer=eval(binomial)
    # method2
    e=[int(n) if i%2==0 else n for i,n in enumerate(binomial.split())]
    r=e[0]+e[2] if e[1]=='+' else e[0]-e[2] if e[1]=='-' else e[0]*e[2]
    return r