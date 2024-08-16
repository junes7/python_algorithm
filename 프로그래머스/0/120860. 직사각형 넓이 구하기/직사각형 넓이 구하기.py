def solution(dots):
    dots=sorted(dots)
    r=1
    for i in range(1,3):
        r*=(dots[i][0]-dots[0][0])**2+(dots[i][1]-dots[0][1])**2
    r=r**0.5
    return r