def solution(n):
    p_nums=set(x for x in range(2,n+1))
    for i in range(2,int(n**0.5)+1):
        if i in p_nums:
            p_nums-=set(x for x in range(i**2,n+1,i))
    r=len(p_nums)
    return r