def solution(num_list):
    answer = num_list
    l_comp=(answer[-1] - answer[-2]) if answer[-1] > answer[-2] else answer[-1]*2
    answer.append(l_comp)
    return answer