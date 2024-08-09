def solution(myString):
    answer=''.join('l' if c<'l' else c for c in myString)
    return answer