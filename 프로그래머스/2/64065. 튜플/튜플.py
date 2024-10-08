def solution(s):
    r=[]
    '''
    맨 앞과 뒤 소괄호를 슬라이스 해준 다음 '},{' 이 문자 기준으로 분리해주었습니다.
    그 다음 sorted 함수를 사용해 길이로 정렬해 주었습니다.
    '''
    s=sorted(s[2:-2].split('},{'),key=lambda x:len(x))
    # 튜플 원소 리스트를 돌면서
    for i,e in enumerate(s):
        '''
        집합 원소 안 콤파를 기준으로 나눠주고
        map함수로 정수 적용해준 다음 리스트화 해주었습니다. 
        '''
        e=list(map(int,e.split(',')))
        '''
        인덱스가 0이면 원소를 그대로 넣어주고 0이 아니면 set함수를 이용
        집합으로 변환해준 다음 이전 집합과 차집합 진행해 주었습니다.
        '''
        r+=e if i==0 else list(set(e)-t)
        '''
        비교 대상을 위해 현재 요소를 집합으로 변환해준 다음 임시 변수에 저장해줍니다.
        '''
        t=set(e)
    return r