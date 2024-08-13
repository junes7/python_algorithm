def solution(price):
    answer=int(price*0.8 if price>=500000 else price*0.9 if price>=300000 else price*0.95 if price>=100000 else price)
    return answer