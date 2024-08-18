def solution(n):
    r=int(''.join(map(str,sorted(map(int,str(n)),reverse=True))))
    return r