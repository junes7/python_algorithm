# 축구의 신(the god of soccer) 2
# 1반과 2반이 축구를 하고 있다. 경기 타임은 90분
# 현재 1반이 5점, 2반이 7점인 상황에서, 1반은 경남정보고
# 최고의 스트라이커인 성익이를 투입하기로 결정했다. 성익이는
# 5분마다 골을 넣을 수 있는 능력을 가지고 있다. 만약 80분에
# 투입이 되면 80분에 곧바로 골을 넣고 85분에 골을 넣음으로서
# 동점이 가능하게 된다. (90분이되면 경기가 바로 종료된다.)
# 현재 경기타임과 우리팀의 득점이 입력으로 주어질 때, 성익
# 이를 투입하면 1반이 이길 수 있는지 결정 프로그램 작성하시오.
# method 1
cmt, s1, s2 = map(int, input().split())
while cmt < 90:
    s1 += 1
    cmt += 5
if s1 > s2:
    print('win')
elif s1 == s2:
    print('same')
else:
    print('lose')