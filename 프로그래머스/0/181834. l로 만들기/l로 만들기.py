def solution(myString):
    answer=''.join('l' if ord(c)<ord('l') else c for c in myString)
    return answer