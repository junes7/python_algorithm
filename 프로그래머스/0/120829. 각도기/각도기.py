def solution(angle):
    answer=1 if 0<angle and angle<90 else 2 if angle==90 else 3 if 90<angle and angle<180 else 4
    return answer