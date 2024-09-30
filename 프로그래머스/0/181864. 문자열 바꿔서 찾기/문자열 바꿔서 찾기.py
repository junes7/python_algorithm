def solution(myString, pat):
    r=0 if myString.translate(myString.maketrans('AB','BA')).find(pat)==-1 else 1
    return r