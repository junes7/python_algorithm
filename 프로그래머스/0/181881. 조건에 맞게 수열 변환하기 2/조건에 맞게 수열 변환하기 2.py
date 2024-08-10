def solution(arr):
    b,f=arr,[]
    cnt=0
    while True:
        f=[n//2 if n>=50 and not n%2 else n*2+1 if n<50 and n%2 else n for n in b]
        if b==f:
            break
        cnt+=1
        b=f     
    return cnt