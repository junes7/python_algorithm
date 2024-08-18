def solution(arr, divisor):
    r=[]
    for n in arr:
        if not n%divisor:
            r+=[n]
    r.sort()
    return [-1] if len(r)==0 else r