def solution(lines):
    # method1 without set function
    # r=0
    # lines.sort()
    # t1,t2=0,0
    # for i in range(1,len(lines)):
    #     s=max(lines[i-1][0],lines[i][0])
    #     e=min(lines[i-1][1],lines[i][1])
    #     t1=e-s if e-s>0 else 0
    #     if i==len(lines)-1:
    #         s=max(lines[i-2][0],lines[i][0])
    #         e=min(lines[i-2][1],lines[i][1])
    #         t2=e-s if e-s>0 else 0
    #     r+=abs(t1-t2)
    # method2 with set function
    r=set()
    for i in range(1,len(lines)):
        r|=set(range(lines[i-1][0],lines[i-1][1]))&set(range(lines[i][0],lines[i][1]))
        if i==len(lines)-1: 
            r|=set(range(lines[i-2][0],lines[i-2][1]))&set(range(lines[i][0],lines[i][1]))
    r=len(r)
    return r