# 주식 투자(investment in stocks)
# gbs라는 개미 투자자가 주식에 투자한다. 투자한 돈의 액수와, 그 주식의
# 하루간의 변동을 퍼센트로 알 때, 이 사람 순수익과 이득/손해 판단 출력
# 첫 줄에 투자 액수 a, 다음 줄에 투자 일수 b, 그 다음줄에 일별 변동폭인
# 데이터의 날짜 갯수(b개)만큼 퍼센트 정수로 입력됩니다. 변동폭(-100~100)
# 순수익(=총 수익(최종 값) - 총 비용(투자한 액수))을 소수점 첫째 자리에서
# 반올림하여 첫째 줄에 출력, 다음 줄에 이득인 경우 "good", 본전일 경우
# "same", 손해일 경우 "bad" 출력(0.5원이면 반올림해서 1이고,
# -0.5~0.5 사이면 순수익은 0으로 본다.) 
# method 1
a = int(input())
b = int(input())
r = list(map(int, input().split()))
tg = 0
ov = a
for i in range(b):
    tg = a * (1 + (r[i]/100))
    a = tg
diff = round(tg - ov)
print(int(diff))
if diff > 0:
    print('good')
elif diff == 0:
    print('same')
else:
    print('bad')