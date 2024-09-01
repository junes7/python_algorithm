def solution(phone_book):
    r=True
    # 전화번호부 오름차순 정렬
    phone_book.sort()
    # 전화번호부 리스트를 돌면서
    for i in range(1, len(phone_book)):
        # 이전 값 접두어 길이로 설정
        L=len(phone_book[i-1])
        # 이전 전화번호랑(접두어랑) 현재 전화번호 접두어 길이만큼 비교했을 때 같으면 False넣어주고 반복문 빠져나온다.
        if phone_book[i-1][:L]==phone_book[i][:L]:
            r=False
            break
    return r