def solution(date1, date2):
    # method1
    # from datetime import datetime    
    # answer = 1 if datetime(date1[0],date1[1],date1[2])<datetime(date2[0],date2[1],date2[2]) else 0
    # method2
    answer=int(date1<date2)
    return answer