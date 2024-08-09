def solution(my_string, indices):
    # method1
    # idx_set=set([i for i in range(len(my_string))])
    # answer=''.join(my_string[i] for i in sorted(idx_set.difference(set(indices))))
    # method2
    answer=''.join(my_string[i] for i in range(len(my_string)) if i not in indices)
    return answer