def solution(s1, s2):
    # method1
    # r=sum([1 for i in s1 if i in s2])
    # method2
    r=len(set(s1)&set(s2))
    return r