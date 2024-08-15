def solution(my_str, n):
    r=[my_str[i:i+n] for i in range(0,len(my_str),n)]
    return r