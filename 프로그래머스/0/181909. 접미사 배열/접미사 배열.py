def solution(my_string):
    s=len(my_string)
    answer=[my_string[s-(i+1):s] for i in range(s)]
    return sorted(answer)