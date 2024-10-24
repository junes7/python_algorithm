def solution(my_string, is_suffix):
    s=len(my_string)
    r=1 if is_suffix in [my_string[s-(i+1):s] for i in range(s)] else 0
    return r