def solution(num):
    r=0
    for i in range(500):
        if num==1:
            break
        else:
            if not num%2:
                num//=2
            else:
                num=num*3+1
            r+=1
    return -1 if r>=500 else r