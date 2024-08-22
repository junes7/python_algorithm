def solution(s, skip, index):
    s=list(s)
    for i in range(len(s)):
        for j in range(index):
            s[i]=chr((ord(s[i])-ord('a')+1)%26+ord('a'))
            while s[i] in skip:
                s[i]=chr((ord(s[i])-ord('a')+1)%26+ord('a'))             
    r=''.join(s)
    return r