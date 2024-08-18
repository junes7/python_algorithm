def solution(babbling):
    coo=['aya','ye','woo','ma']
    r=[]
    for bab in babbling:
        for co in coo:
            bab=bab.replace(co,'0')
        r+=[bab]
    for i in range(len(r)):
        try:
            r[i]=str(eval(r[i]))
        except:
            pass
    return r.count('0')