def solution(num, total):
    r=[]
    q=total//num
    print(q)
    while True:
        r=[]
        for i in range(num):
            r+=[q+i]
        if len(r)==num and sum(r)==total:
            break
        q-=1
    return r