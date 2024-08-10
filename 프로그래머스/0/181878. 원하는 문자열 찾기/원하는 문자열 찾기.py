def solution(myString, pat):
    # method1
    # answer=0 if myString.lower().find(pat.lower())==-1 else 1
    # method2
    answer=int(pat.lower() in myString.lower())
    return answer