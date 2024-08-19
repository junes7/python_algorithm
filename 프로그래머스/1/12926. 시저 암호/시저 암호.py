def solution(s, n):
    r=''
    for c in s:
        if c==' ':
            r+=' '
        else:
            if c.isupper():
                r+=chr((ord(c)-ord('A')+n)%26+ord('A'))
            else:
                r+=chr((ord(c)-ord('a')+n)%26+ord('a'))
    return r