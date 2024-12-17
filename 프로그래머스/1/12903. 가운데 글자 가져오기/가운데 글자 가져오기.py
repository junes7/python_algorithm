def solution(s):
    r=''
    r+=s[len(s)//2-1:len(s)//2+1] if not len(s)%2 else s[len(s)//2]
    return r