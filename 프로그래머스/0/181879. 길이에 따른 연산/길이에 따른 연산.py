def solution(num_list):
    # method1
    # answer=sum(num_list) if len(num_list)>=11 else eval('*'.join(str(i) for i in num_list))
    # method2
    from math import prod
    answer=sum(num_list) if len(num_list)>=11 else prod(num_list)
    return answer