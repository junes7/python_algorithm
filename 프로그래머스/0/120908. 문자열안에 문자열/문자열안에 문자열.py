def solution(str1, str2):
    answer=1 if str2 in str1 else 2
    # answer=1 if str1.find(str2)!=-1 else 2
    return answer