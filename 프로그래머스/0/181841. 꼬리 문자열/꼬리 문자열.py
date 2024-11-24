def solution(str_list, ex):
    r=''.join(s for s in str_list if ex not in s)
    return r