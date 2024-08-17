def solution(bin1, bin2):
    r,s='',0
    for i,a in enumerate(bin1[::-1]):
        s+=int(a)*2**i
    for i,b in enumerate(bin2[::-1]):
        s+=int(b)*2**i
    if s==0:
        r='0'
    while s>0:
        r+=str(s%2)
        s//=2
    return r[::-1]