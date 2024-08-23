def solution(ingredient):
    # 결과, 리스트 순서대로 넣을 리스트, 순서비교대상 변수 선언
    r,t,burger=0,[],[1,2,3,1]
    # 재료 리스트 반복문을 돌면서
    for n in ingredient:
        # 재료들을 순서대로 계속 넣어주고
        t+=[n]
        # 햄버거 요소를 쌓기 전까지는 continue로 skip
        if len(t)<4:
            continue    
        # 슬라이스 함수를 이용해 뒤에 4번째부터 현재까지의 재료가 
        # 비교대상이랑 일치하면 결과값 증가하고 비교대상 일치한 요소 삭제
        else:
            if t[-4:]==burger:
                r+=1
                del t[-4:]
    return r