def solution(arr):
    answer=[n//2 if n>=50 and not n%2 else n*2 if n<50 and n%2 else n for n in arr]
    return answer