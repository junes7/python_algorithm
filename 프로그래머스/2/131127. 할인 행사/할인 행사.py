def solution(want, number, discount):
    r=0
    # zip함수로 종류와 수량을 묶어주어 딕셔너리화 해 주고 sorted함수로 정렬해 주었습니다.
    wish=dict(zip(want,number))
    wish=sorted(wish.items())
    # 기간 중 10일이 일치하는 경우를 찾기 위해서 할인 제품 길이-10+1의 범위만큼 반복문 돌면서
    for i in range(len(discount)-10+1):
        t={}
        # 10의 길이만큼 반복문 돌면서 상품 종류와 수량 딕셔너리 생성
        for j in range(i,i+10):
            if t.get(discount[j])==None:
                t[discount[j]]=1
            else:
                t[discount[j]]+=1
        # 상품 종류와 수량 딕셔너리 오름차순 정렬
        t=sorted(t.items())
        # 원하는 상품 종류 및 수량과 임시 생성한 상품 종류 및 수량 일치하면
        if wish==t:
            # 가능한 날 count
            r+=1
    return r