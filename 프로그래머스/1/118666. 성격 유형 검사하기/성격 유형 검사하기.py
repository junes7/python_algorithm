def solution(survey, choices):
    # 성격 유형 저장 변수
    r=''
    # 4개 성격 유형 지표 리스트 선언
    b=['R','T','C','F','J','M','A','N']
    t=dict(zip(b,[0]*8))
    # 문자열 배열과 선택한 선택지 리스트를 zip함수로 묶고 반복문을 돌면서 성격 유형 지표의 값을 채워줍니다.
    for i,c in zip(survey,choices):
        if c<4:
            t[i[0]]+=4-c
        elif c>4:
            t[i[1]]+=c-4
    # 두 유형별 지표 리스트를 돌면서
    for i in range(0,len(b)//2):
        # 값이 동일하거나 왼쪽 값이 클 때 왼쪽 값 문자열에 추가
        if t[b[2*i]]>=t[b[2*i+1]]:
            r+=b[2*i]
        # 값이 오른쪽 값이 클 때 오른쪽 값 문자열에 추가
        elif t[b[2*i]]<t[b[2*i+1]]:
            r+=b[2*i+1]
    return r