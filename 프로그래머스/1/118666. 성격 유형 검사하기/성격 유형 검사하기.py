def solution(survey, choices):
    # 성격 유형 저장 변수
    r=''
    # 4개 성격 유형 지표 리스트 선언
    b=['R','T','C','F','J','M','A','N']
    t=dict(zip(b,[0]*8))
    for i,c in zip(survey,choices):
        if c<4:
            t[i[0]]+=4-c
        elif c>4:
            t[i[1]]+=c-4
    for i in range(0,len(b)//2):
        # 값이 동일하거나 오른쪽 값이 작을 때
        if t[b[2*i]]>=t[b[2*i+1]]:
            r+=b[2*i]
        elif t[b[2*i]]<t[b[2*i+1]]:
            r+=b[2*i+1]
    return r