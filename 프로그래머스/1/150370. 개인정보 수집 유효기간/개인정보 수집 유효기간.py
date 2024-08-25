def solution(today, terms, privacies):
    r=[]
    from datetime import date, timedelta
    from dateutil.relativedelta import relativedelta
    t={}
    for te in terms:
        type,exp=te.split(' ')
        t[type]=int(exp)
    y,m,d=map(int,today.split('.'))
    today=date(y,m,d)
    for i,p in enumerate(privacies):
        s,type=p.split(' ')
        y,m,d=map(int,s.split('.'))
        d=date(y,m,d)
        # print(d+relativedelta(months=t[type])-timedelta(days=1))
        if d+relativedelta(months=t[type])-timedelta(days=1)<today:
            r+=[i+1]
        
    return r