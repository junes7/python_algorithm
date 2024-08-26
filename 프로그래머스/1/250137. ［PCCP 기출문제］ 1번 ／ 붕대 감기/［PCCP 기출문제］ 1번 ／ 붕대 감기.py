def solution(bandage, health, attacks):
    at,cnt=[],0
    # 공격 받는 시간 리스트 생성
    for i in attacks:
        at+=[i[0]]
    # 현재 체력 변수
    cur_h=health
    # 마지막 공격 시간까지 시간 리스트 반복문 돌면서
    for i in range(1,attacks[-1][0]+1):
        # 현재 시간이 공격 시간일 때
        if i in at:
            # 연속기술성공 시간 초기화
            cnt=0
            # 피해량 만큼 체력 감소
            cur_h-=attacks[at.index(i)][1]
            # 몬스터 공격 받고 캐릭터 체력이 0이하가 된다면 체력에 -1넣고 반복문 나옵니다.
            if cur_h<=0:
                cur_h=-1
                break
        # 현재 시간이 기술 시전 시간일 때
        else:
            # 연속기술성공 시간 증가
            cnt+=1
            # 현재 체력이 최대 체력 이상일 때 최대 체력 넣고 skip
            if cur_h>=health:
                cur_h=health
                continue
            # 현재 체력이 최대 체력 미만일 때
            else:
                # 연속기술성공 시간이 마지막 기술 시전 시간일 때 
                if cnt==bandage[0]:
                    # 연속기술성공 시간 초기화
                    cnt=0
                    # 초당 체력 회복에 추가 회복 추가
                    cur_h+=bandage[1]+bandage[2]
                # 연속기술성공 시간이 마지막 기술 시전 시간 전일 때
                else:
                    # 초당 체력 회복 추가
                    cur_h+=bandage[1]
    # 현재 체력이 0이하일 때 -1 반환 아닐 때 현재 체력 반환
    return -1 if cur_h<=0 else cur_h