def solution(a, d, included):
    answer=0
    for i,t in enumerate(included):
        if t:
            answer+=a+d*i
    return answer