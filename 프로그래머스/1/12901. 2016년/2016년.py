def solution(a, b):
    from datetime import date
    r=date(2016,a,b).strftime('%a').upper()
    return r