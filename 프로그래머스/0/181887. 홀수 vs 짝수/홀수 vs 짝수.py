def solution(num_list):
    # method1
    os,es=0,0
    for i,n in enumerate(num_list):
        if i%2:
            os+=n
        else:
            es+=n
    r=os if os>es else es
    # method2
    # r=max(sum(num_list[::2]),sum(num_list[1::2]))
    return r