def solution(progresses, speeds):
    th,t=0,{}
    # 작업 진도와 작업 속도 배열의 개수가 같으므로 zip함수로 묶어주었습니다.
    for p,s in zip(progresses,speeds):
        # 실수로 계산했을 때 값이 몫보다 크다면 몫에 1을 더해줍니다.
        if (100-p)/s>(100-p)//s:
            d=(100-p)//s+1
        # 실수로 계산했을 때 값이 몫과 같다면 그대로 몫을 넣어줍니다.
        else:
            d=(100-p)//s
        # 계산한 날짜가 기준값보다 작거나 같을 때 기준값을 키로 카운트해줍니다.
        if d<=th:
            t[th]+=1
        # 계산한 날짜가 기준값보다 클 때 기준값을 계산 날짜로 변경하고 계산 날짜를 키로서 해시에 추가해줍니다.
        else: # d>th
            th=d
            t[d]=1
    r=list(t.values())
    return r