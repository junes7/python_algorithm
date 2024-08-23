def solution(ingredient):
    # 결과, 리스트 순서대로 넣을 리스트, 순서비교대상 변수 선언
    r,t,burger=0,[],[1,2,3,1]
    for n in ingredient:
        t+=[n]
        if len(t)<4:
            continue
        else:
            if t[-4:]==burger:
                r+=1
                del t[-4:]
    return r