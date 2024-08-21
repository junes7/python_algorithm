def solution(n, m, section):
    # 처음엔 시작점으로부터 m구간을 무조건 칠해야 하므로 결과값에 1을 설정
    r=1
    # 처음 값 설정
    s=section[0]
    for i in section:
        '''
        처음 구간에서 가장 오른쪽 구간을 칠할 수 있는 숫자보다
        section 요소값이 크면 처음 값 다시 설정해주고 카운트 해줍니다.
        '''
        if s+m-1<i:
            s=i
            r+=1
    return r