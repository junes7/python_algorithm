def solution(friends, gifts):
    # 친구들끼리 주고 받은 선물 횟수와 선물 지수 딕셔너리 코드
    gf={}
    l=len(friends)
    # 친구 별 받을 선물의 수
    score=[0]*l
    # comprehension 반복문 사용해 선물 주고받은 횟수 2차원 배열 생성
    give=[[0]*l for _ in range(l)]
    #### 초기값 설정 및 선물 지수 도출
    # 딕셔너리 초기값 생성 | f는 키, 값은 배열 [준 선물, 받은 선물, 선물 지수]
    for f in friends:
        gf[f]=[0,0,0]
    # 주고 받은 선물 기록 리스트를 돌면서
    for i in gifts:
        # g(give)는 준 친구 이름, r(receive)은 받은 친구 이름
        g,r=i.split(' ')
        # {딕셔너리}.get()을 이용해 배열 속 해당 요소 증가
        gf.get(g)[0]+=1
        gf.get(r)[1]+=1
    # 준 선물 횟수와 받은 선물 횟수를 이용해 선물 지수 계산해 저장
    for f in friends:
        gf.get(f)[2]=gf.get(f)[0]-gf.get(f)[1]
    #### 선물 주고받은 2차원 배열 설정 및 선물 받을 수 결정
    for gift in gifts:
        # 선물 주고 받은 배열 생성 [선물 준 친구, 선물 받은 친구] 하고
        gift=gift.split(' ')
        # 선물 주고받은 횟수 배열에 해당하는 요소 count
        # 행은 선물 준 친구 인덱스, 열은 선물 받은 친구 인덱스
        give[friends.index(gift[0])][friends.index(gift[1])]+=1
    for a in range(l):
        for b in range(a+1,l):
            # a가 b에게 선물을 준 횟수
            g_score=give[a][b]
            # b가 a에게 선물을 준 횟수
            r_score=give[b][a]
            # 선물을 주고 받은 횟수가 다를 경우
            if g_score!=r_score and (g_score>0 or r_score>0):
                if g_score>r_score:
                    score[a]+=1
                else:
                    score[b]+=1
            # 선물을 주고 받은 횟수가 동일한 경우
            else: # g_score==r_score
                if gf[friends[a]][2]>gf[friends[b]][2]:
                    score[a]+=1
                elif gf[friends[a]][2]<gf[friends[b]][2]:
                    score[b]+=1
    r=max(score)
    return r