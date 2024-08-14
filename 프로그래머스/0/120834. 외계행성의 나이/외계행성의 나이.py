def solution(age):
    r=''.join(chr(97+int(c)) for c in str(age))
    return r