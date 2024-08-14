def solution(n):
    answer=1 if float(n**0.5).is_integer() else 2
    return answer