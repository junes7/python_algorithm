def solution(a, b):
    answer=a**2+b**2 if a%2 and b%2 else 2*(a+b) if a%2 or b%2 else abs(a-b)
    return answer