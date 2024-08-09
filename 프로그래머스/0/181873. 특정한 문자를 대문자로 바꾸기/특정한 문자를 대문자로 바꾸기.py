def solution(my_string, alp):
    answer = ''.join(c.upper() if c==alp else c for c in my_string)
    return answer