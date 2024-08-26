def solution(id_list, report, k):
    r=[]
    # 신고 해시(딕셔너리) 리스트 신고당한 사람:[신고자 집합, 신고자 이메일 처리 횟수(이때는 키 값이 신고자가 된다.)]
    users={user:[set(),0] for user in id_list}
    # 신고 리스트를 돌면서
    for repo in report:
        # 신고 리스트 요소를 신고자와 신고당한 이용자로 분리 후
        # 신고 해시의 신고당한 유저 요소에 신고자 이름 추가
        id,re=repo.split(' ')
        if re not in users[re][0]:
            users[re][0].add(id)
    # 신고 딕셔너리 리스트를 돌면서
    for id, reported_ids in users.items():
        # 날 신고한 유저 수가 k값 이상이면
        if len(reported_ids[0])>=k:
            # 신고자 리스트 돌면서
            for r_id in reported_ids[0]:
                # 신고자 이메일 처리 횟수에 count
                users[r_id][1]+=1
    # 해시에서 값들만 뽑아낸 후 이메일 처리 횟수만 결과 리스트로 도출    
    r=[cnt for r_id,cnt in users.values()]
    return r