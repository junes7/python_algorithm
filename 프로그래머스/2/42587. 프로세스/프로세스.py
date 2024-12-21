def solution(priorities, location):
    from collections import deque
    r=0
    # comprehension 형태로 원소 우선도와, index 리스트 생성
    p=[[i,n] for i,n in enumerate(priorities)]
    q=deque(p)
    while q:
        now=q.popleft()
        if any(now[1]<queue[1] for queue in q): q.append(now)
        else:
            if now[0]==location: return r+1
            r+=1
    return -1