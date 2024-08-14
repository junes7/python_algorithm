def solution(sides):
    r=1 if (sum(sides)-max(sides))>max(sides) else 2
    return r