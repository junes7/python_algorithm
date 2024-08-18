def solution(n):
    r=''.join('수' if not i%2 else '박' for i in range(n))
    return r