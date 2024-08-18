def solution(n):
    # method1 without sum function
    # r=0
    # for c in str(n):
    #     r+=int(c)
    # method2 with sum function
    r=sum([int(c) for c in str(n)])
    return r