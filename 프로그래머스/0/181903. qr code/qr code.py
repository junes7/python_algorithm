def solution(q, r, code):
    r=''.join(code[i] for i in range(len(code)) if i%q==r)
    return r