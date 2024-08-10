def solution(arr):
    cnt=0
    while True:
        f=[n//2 if n>=50 and not n%2 else n*2+1 if n<50 and n%2 else n for n in arr]
        if arr==f:
            break
        cnt+=1
        arr=f     
    return cnt