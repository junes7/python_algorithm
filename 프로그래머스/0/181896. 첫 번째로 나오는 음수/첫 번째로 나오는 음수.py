def solution(num_list):
    # method1
    answer=-1
    for i,n in enumerate(num_list):
        if n<0:
            answer=i
            break
    # method2
    # answer=([i for i,n in enumerate(num_list) if n<0]or[-1])[0]
    return answer