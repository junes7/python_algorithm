def solution(strings, n):
    strings.sort()
    r=sorted(strings,key=lambda x:x[n])
    return r