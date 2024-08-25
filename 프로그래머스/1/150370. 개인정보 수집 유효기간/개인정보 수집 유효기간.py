def solution(today, terms, privacies):
    r=[]
    from datetime import date
    from dateutil.relativedelta import relativedelta
    # 약관별 유효기간 해시 코드 생성
    t={}
    for te in terms:
        type,exp=te.split(' ')
        t[type]=int(exp)
    # 오늘 날짜 문자열을 날짜(date) 유형으로 전환
    y,m,d=map(int,today.split('.'))
    today=date(y,m,d)
    # 수집된 개인정보 리스트를 돌면서
    for i,p in enumerate(privacies):
        # 개인정보 수집 날짜 유형 문자에서 날짜로 변형
        s,type=p.split(' ')
        y,m,d=map(int,s.split('.'))
        d=date(y,m,d)
        # 수집일자로부터 유효기간 이후 날짜가 오늘 이내일 때(유효기간이 지났을 때) 
        if d+relativedelta(months=t[type])-relativedelta(days=1)<today:
            # 약관 인덱스 추가
            r+=[i+1]
    return r