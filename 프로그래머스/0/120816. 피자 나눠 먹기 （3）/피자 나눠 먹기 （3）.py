def solution(slice, n):
    answer=n//slice+int(n%slice>0)
    return answer