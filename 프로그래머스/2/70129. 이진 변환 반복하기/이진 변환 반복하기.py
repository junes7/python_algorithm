def solution(s):
    # 회차 횟수, 제거할 0의 개수 변수 선언
    cnt,zcnt=0,0
    # int함수로 이진수를 10진수로 변경했을 때 값이 1이 아니라면
    while int(s,2)!=1:
        # 횟수 count
        cnt+=1
        # 제거할 0의 개수 count
        zcnt+=s.count('0')
        # replace함수로 0을 빈 문자열로 치환해 0제거 후 길이 저장
        s=len(s.replace('0',''))
        # bin함수로 길이 값 이진수로 변환 | [2:]이렇게 한 이유는 이진수 변환 뒤 앞에 0b가 붙기 때문
        # ex) bin(6) → 0b110 그래서 앞에 2자리 슬라이스 함수로 제거 
        s=bin(s)[2:]
    # 결과값 배열에 총 횟수와 총 제거된0의 개수 삽입
    r=[cnt,zcnt]
    return r