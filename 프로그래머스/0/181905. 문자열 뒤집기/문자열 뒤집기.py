def solution(my_string, s, e):
    answer=''.join(my_string[:s]+my_string[s:e+1][::-1]+my_string[e+1:])
    return answer