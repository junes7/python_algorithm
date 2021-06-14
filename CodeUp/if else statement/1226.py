# 이번 주 로또(This week's Lotto)
# 주희는 로또 매니아다. 매주 로또 한장을 사고 토요일이면
# 대박을 기대하며 당첨번호를 확인한다. 몇 주 전 4등이었는데
# 확인을 잘못해서 5등인줄 알고 바꾸기 귀찮아서 버렸었다.
# 이러한 사태가 다시 일어나지 않게 하기 위해 프로그램 작성
# 로또 순위 매기는 방법 | 1등 : 당첨번호 6개 일치
# 2등 : 당첨번호 5개 일치 + 보너스번호 일치
# 3등 : 5개 번호 일치 | 4등 : 4개 번호 일치
# 5등 : 3개 번호 일치 | 꽝: 2개 이하 일치
# method 1
wn = list(map(int, input().split()))
n = list(map(int, input().split()))
cnt, bns = 0, 0
for i in range(len(wn)-1):
    for j in range(len(n)):
        if n[j] == wn[i]:
            cnt += 1
        if n[j] == wn[len(wn)-1]:
            bns += 1
if cnt == 6:
    print(1)
elif cnt == 5 and bns != 0:
    print(2)
elif cnt >= 3:
    print(8-cnt)
else:
    print(0)