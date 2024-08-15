def solution(dot):
    # method1 ternary operator
    # r=(1 if dot[1]>0 else 4) if dot[0]>0 else (2 if dot[1]>0 else 3)
    # method2 if~else
    r=0
    if dot[0]>0:
        r=1 if dot[1]>0 else 4
    else:
        r=2 if dot[1]>0 else 3
    return r