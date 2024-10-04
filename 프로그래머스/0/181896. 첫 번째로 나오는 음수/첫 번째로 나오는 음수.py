def solution(num_list):
    # method1
    r=-1
    for i,n in enumerate(num_list):
        if n<0:
            r=i
            break
    # method2
    # r=([i for i,n in enumerate(num_list) if n<0]or[-1])[0]
    return r