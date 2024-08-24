def solution(data, ext, val_ext, sort_by):
    r=[]
    # 기준 열 해시 코드
    th={'code':0,'date':1,'maximum':2,'remain':3}
    for i,d in enumerate(data):
        # 기준 열의 값이 기준 값보다 작을 때 배열에 추가
        if d[th[ext]]<val_ext:    
            r+=[d]
    # 정렬 기준으로 데이터 재정렬
    r.sort(key=lambda x:x[th[sort_by]])
    return r