def solution(citations):
    '''
    인용된 논문 횟수를 내림차순으로 정렬 후 인덱스와 인용수를 비교했을 때
    인덱스보다 작아지는 구간 바로 전 인덱스를 h-index라고 합니다.
    '''
    r=-1
    citations.sort(reverse=True)
    for i,c in enumerate(citations):
        if c<(i+1):
            r=i
            break
    return len(citations) if r==-1 else r