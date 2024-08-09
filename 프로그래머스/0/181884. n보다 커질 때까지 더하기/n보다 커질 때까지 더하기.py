def solution(numbers, n):
    s=0
    for i in numbers:
        if s>n:
            break
        s+=i
    return s