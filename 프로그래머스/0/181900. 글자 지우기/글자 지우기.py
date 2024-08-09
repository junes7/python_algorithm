def solution(my_string, indices):
    idx_set=set([i for i in range(len(my_string))])
    answer=''.join(my_string[i] for i in sorted(idx_set.difference(set(indices))))
    return answer