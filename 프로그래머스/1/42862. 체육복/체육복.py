def solution(n, lost, reserve):
    t={}
    # 도난 학생, 여벌 학생 리스트 오름차순 정렬
    lost=sorted(lost)
    reserve=sorted(reserve)
    # 수정 속도를 향상 시키기 위해 리스트를 딕셔너리(해시)로 변환
    for i in range(1,n+1):
        # 여벌이 있지만
        if i in reserve:
            # 도난 당하지 않았으면 2 당했으면 1
            t[i]=2 if i not in lost else 1
        # 여벌이 없을 때
        else:
            # 도난 당하지 않았으면 1 당했으면 0
            t[i]=1 if i not in lost else 0
    # 여벌 학생 리스트 돌면서
    for i in reserve:
        # 여벌을 가져왔지만 도난 당한 학생이면 빌려줄 수 없기에 skip
        if i in lost:
            continue
        # 도난 당한 학생이 아니라면
        else:
            # 앞 번호 학생이 도난당해서 옷이 없을 때
            if i-1 in lost and t[i-1]<1:
                t[i-1]+=1
                t[i]-=1
            # 뒷 번호 학생이 도난당해서 옷이 없을 때
            elif i+1 in lost and t[i+1]<1:
                t[i+1]+=1
                t[i]-=1
    # 딕셔너리에서 값만 추출해 리스트화
    t=list(t.values())
    # 전체 학생 수에서 옷이 없는 학생 제외해 결과값 추출
    r=n-t.count(0)
    return r