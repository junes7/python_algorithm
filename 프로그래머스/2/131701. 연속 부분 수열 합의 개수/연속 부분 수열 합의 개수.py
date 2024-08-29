def solution(elements):
    # 원형 수열이니깐 deque(양방향 큐) 이용
    from collections import deque
    # 중복제거를 위해 set함수(집합)로 초기화
    r=set([])
    deq=deque(elements)
    # deque화된 요소의 길이만큼 돌면서
    for i in range(len(deq)):
        # 합을 넣어줄 변수 초기화
        s=0
        # deque 배열을 돌면서
        for d in deq:
            # 요소 합을 진행해주고 집합에 넣어줍니다.
            s+=d
            r.add(s)
        # 처음 수를 맨 뒤로 넣어줍니다.
        deq+=[deq.popleft()]
    return len(r)