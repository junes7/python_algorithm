def solution(num_list):
    l = num_list
    l.append((l[-1]-l[-2]) if l[-1]>l[-2] else l[-1]*2)
    return l