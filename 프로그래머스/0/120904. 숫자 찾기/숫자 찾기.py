def solution(num, k):
    answer=str(num).find(str(k))+1 if str(num).find(str(k))>-1 else -1
    return answer