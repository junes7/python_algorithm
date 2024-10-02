def solution(my_string, is_prefix):
    r=1 if is_prefix in [my_string[0:1+i] for i in range(len(my_string))] else 0
    return r