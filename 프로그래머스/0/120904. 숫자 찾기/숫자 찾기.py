def solution(num, k):
    r=-1 if str(k) not in str(num) else str(num).find(str(k))+1
    return r