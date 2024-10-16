def solution(intStrs, k, s, l):
    r=[int(n[s:s+l]) for n in intStrs if int(n[s:s+l])>k]
    return r