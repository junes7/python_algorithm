def solution(sizes):
    # method1 without max, min function
    # m1,m2=0,0
    # for s1,s2 in sizes:
    #     if s1<s2:
    #         s1,s2=s2,s1
    #     if m1<s1:
    #         m1=s1
    #     if m2<s2:
    #         m2=s2
    # r=m1*m2
    # method2 with max, min function
    r=max(sum(sizes,[]))*max(min(s) for s in sizes)
    return r