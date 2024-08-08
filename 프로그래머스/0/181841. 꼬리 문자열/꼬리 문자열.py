def solution(str_list, ex):
    answer=''.join(s for s in str_list if s.find(ex)==-1)
    return answer