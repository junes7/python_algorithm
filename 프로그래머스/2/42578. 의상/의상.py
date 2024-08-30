def solution(clothes):
    r,cl=1,{}
    # 옷 종류와 의상 이름 리스트의 딕셔너리 생성
    # c는 의상 이름, t는 의상 종류
    for c,t in clothes:
        if cl.get(t)==None:
            cl[t]=[c]
        else:
            cl[t]+=[c]
    # 옷 종류 길이를 각각 곱해줍니다.
    for t in cl:
        r*=len(cl[t])+1
    # 결과값에서 1을 빼주어 조합의 수를 구해줍니다.
    return r-1