def solution(dartResult):
    # method1 포함 여부와 딕셔너리를 이용해 구현
    # r=[]
    # for i,c in enumerate(dartResult):
    #     if c in ['S','D','T']:
    #         if dartResult[i-2] in ['0','1','2','3']:
    #             n=int(dartResult[i-2:i])
    #         else:
    #             n=int(dartResult[i-1])
    #         r+=[{'S':n**1,'D':n**2,'T':n**3}[c]]
    #     if c=='#':
    #         r[-1]=-1*r[-1]
    #     elif c=='*':
    #         if len(r)==1:
    #             r[-1]=r[-1]*2
    #         else:
    #             r[-1]=r[-1]*2
    #             r[-2]=r[-2]*2
    #     r=sum(r)
    '''
    method2 re라이브러리의 compile(정규표현식 컴파일)과
    findall(정규표현식과 매치되는 문자열 검색 및 리스트화)함수 이용
    '''
    import re
    b={'S':1,'D':2,'T':3}
    s={'':1,'*':2,'#':-1}
    p=re.compile('(\d+)([SDT])([#*]?)')
    dart=p.findall(dartResult)
    for i in range(len(dart)):
        if dart[i][2]=='*' and i>0:
            dart[i-1]*=2
        dart[i]=int(dart[i][0])**b[dart[i][1]]*s[dart[i][2]]
    r=sum(dart)
    return r