def solution(lottos, win_nums):
    # 로또 순위 해시값으로 설정(검색, 수정 빠르게 하기 위해)
    rank={6:1,5:2,4:3,3:4,2:5}
    # 0개수, 0이 아니지만 당첨 번호와 불일치 개수, 로또 구매 번호 길이 변수 설정
    z,o,l=0,0,len(lottos)
    # 로또 번호 리스트 돌면서
    for n in lottos:
        # 번호가 0보다 크고 로또 번호와 불일치할 때
        if n>0 and n not in win_nums:
            o+=1
        # 번호가 0일 때
        elif n==0:
            z+=1
    # rank 해시에 일치된 개수 보내서 순위 도출 
    r=[rank.get(l-o,6),rank.get(l-z-o,6)]
    return r