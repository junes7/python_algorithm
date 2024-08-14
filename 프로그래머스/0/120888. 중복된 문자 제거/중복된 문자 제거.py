def solution(my_string):
    # method1 for 반복문으로 중복 제거
    # r=''
    # for c in my_string:
    #     if c not in r:
    #         r+=c
    # method2 dictionary로 중복 제거
    r=''.join(dict.fromkeys(my_string))
    return r