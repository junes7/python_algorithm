def solution(myString):
    # method1
    # answer=''.join('l' if ord(c)<ord('l') else c for c in myString)
    # method2
    answer=''.join('l' if c<'l' else c for c in myString)
    return answer