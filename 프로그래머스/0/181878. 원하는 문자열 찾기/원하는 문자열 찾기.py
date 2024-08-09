def solution(myString, pat):
    answer=0 if myString.lower().find(pat.lower())==-1 else 1
    return answer