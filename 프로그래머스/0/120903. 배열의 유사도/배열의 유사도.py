def solution(s1, s2):
    answer=sum([1 for i in s1 if i in s2])
    return answer