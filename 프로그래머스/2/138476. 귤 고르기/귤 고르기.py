def solution(k, tangerine):
    # 사이즈 별 귤 개수 딕셔너리화
    ocnt={}
    for n in tangerine:
        ocnt[n]=1 if ocnt.get(n)==None else ocnt[n]+1
    # 사이즈별 귤 개수 기준으로 내림차순 정렬 및 리스트화
    ocnt=sorted(ocnt.items(),key=lambda x:x[1],reverse=True)
    # 가장 빈도가 높은 사이즈의 귤 개수로 count 변수 초기화하고 종류 변수도 1로 초기화
    r,cnt=1,ocnt[0][1]
    # 사이즈별 귤 개수 리스트를 두번째부터 돌면서
    for i in range(1,len(ocnt)):
        # 현재 귤개수가 상자에 담으려는 귤의 개수와 같거나 초과일때 루프를 빠져나옵니다.
        if cnt>=k:
            break
        # 현재 귤개수가 상자에 담으려는 귤의 개수보다 작을 때
        else:
            # 다음 종류 귤 개수 추가해주고 귤 사이즈 개수도 1증가해줍니다.
            cnt+=ocnt[i][1]
            r+=1
    return r