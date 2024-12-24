def solution(n, t, m, p):
    r,st,num='','0',1
    for i in range(t*m):
        st+=base_n(num,n)
        num+=1
    for i in range(p-1,t*m,m):
        r+=st[i]
    return r

def base_n(num, n):
    s=''
    while num!=0:
        s=str(num%n)+s if num%n<10 else chr(55+num%n)+s
        num//=n
    return s