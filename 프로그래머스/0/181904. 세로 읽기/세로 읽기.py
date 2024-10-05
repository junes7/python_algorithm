def solution(my_string, m, c):
    r=''.join(my_string[m*i:m*i+m][c-1:c] for i in range(len(my_string)//m))
    return r