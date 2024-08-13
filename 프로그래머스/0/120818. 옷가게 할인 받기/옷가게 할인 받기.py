def solution(price):
    # answer=int(price*0.8 if price>=500000 else price*0.9 if price>=300000 else price*0.95 if price>=100000 else price)
    drs={500000:0.8,300000:0.9,100000:0.95,0:1}
    answer=0
    for dr,r in drs.items():
        if price>=dr:
            answer=int(r*price)
            break
    
    return answer