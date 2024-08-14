def solution(age):
    answer=''.join(chr(97+int(c)) for c in str(age))
    return answer