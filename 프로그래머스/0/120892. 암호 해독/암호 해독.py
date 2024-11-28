def solution(cipher, code):
    r=''.join(c for i,c in enumerate(cipher) if (i+1)%code==0)
    return r