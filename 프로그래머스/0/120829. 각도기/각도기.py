def solution(angle):
    # method1
    # answer=1 if 0<angle and angle<90 else 2 if angle==90 else 3 if 90<angle and angle<180 else 4
    # method2
    answer=(angle//90)*2+int(angle%90>0)
    return answer