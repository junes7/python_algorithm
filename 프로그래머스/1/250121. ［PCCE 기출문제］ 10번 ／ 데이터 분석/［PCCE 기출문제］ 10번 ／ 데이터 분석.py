def solution(data, ext, val_ext, sort_by):
    r=[]
    # 기준 열 해시 코드
    th={'code':0,'date':1,'maximum':2,'remain':3}
    for i,d in enumerate(data):
        if d[th[ext]]<val_ext:    
            r+=[d]
    r.sort(key=lambda x:x[th[sort_by]])
    return r