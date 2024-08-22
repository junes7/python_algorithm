def solution(s, skip, index):
    s=list(s)
    for i in range(len(s)):
        for j in range(index):
            if s[i] in skip:
                s[i]=chr((ord(s[i])-ord('a')+1)%26+ord('a'))
            else:
                if chr((ord(s[i])-ord('a')+1)%26+ord('a')) in skip:
                    s[i]=chr((ord(s[i])-ord('a')+2)%26+ord('a'))
                else:
                    s[i]=chr((ord(s[i])-ord('a')+1)%26+ord('a'))
    r=''.join(s)
    return r