def solution(num_list):
    os,es=0,0
    for i,n in enumerate(num_list):
        if i%2:
            os+=n
        else:
            es+=n
    answer=os if os>es else es
    return answer