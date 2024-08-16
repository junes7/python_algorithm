def solution(dots):
    # method1 max, min function
    # r=(max(dots)[0]-min(dots[0]))*(max(dots)[1]-min(dots)[1])
    # method2 sorted function
    dots=sorted(dots)
    r=(dots[-1][0]-dots[0][0])*(dots[-1][1]-dots[0][1])
    return r