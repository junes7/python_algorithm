def solution(num_list):
    answer=sum(num_list) if len(num_list)>=11 else eval('*'.join(str(i) for i in num_list))
    return answer