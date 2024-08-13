def solution(cipher, code):
    answer = ''.join(c for i,c in enumerate(cipher) if (i+1)%code==0)
    print(answer)
    return answer