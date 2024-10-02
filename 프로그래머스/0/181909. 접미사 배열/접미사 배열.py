def solution(my_string):
    s=len(my_string)
    r=[my_string[s-(i+1):s] for i in range(s)]
    return sorted(r)