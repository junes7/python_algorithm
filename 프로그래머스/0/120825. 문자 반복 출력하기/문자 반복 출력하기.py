def solution(my_string, n):
    answer=''.join(c*n for c in my_string)
    return answer