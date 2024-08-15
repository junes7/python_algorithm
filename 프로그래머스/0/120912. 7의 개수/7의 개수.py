def solution(array):
    r=sum([1 for n in array for i in str(n) if i=='7'])
    return r