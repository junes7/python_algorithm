def solution(my_string, letter):
    answer=''.join(c for c in my_string if c!=letter)
    return answer