# 좋은 날(Good day)
# 아이유는 다음과 같은 날을 "좋은 날"이라고 정했다.^^
# - 연도와 월,일이 입력되면, (연도 4자리)와 (월,일을 합친 4자리 숫자)가 같은
# 숫자 구성으로 된 날을 말한다. 예를 들어, 2012년 12월 02일은 좋은 날이다.
# 연도인 2012와 월일을 합친 1202의 숫자 구성이 같기 때문이다.
# "좋은 날"을 판별하는 프로그램을 작성하시오.
# 연도/월/일 형태로 입력된다. (1000<=연도<=9999), 월과 일은 실제 존재하는
# 날짜만 입력으로 들어온다.
# 주어진 일자가 좋은 날이면 "yes"를 출력하고, 아니면 "no"를 출력한다.
# method 1
y, m, d = input().split('/')
c1 = []
c2 = []
rlt = 0
for i in range(len(y)):
    c1.append(int(y[i]))
for j in range(2):
    c2.append(int(m[j]))
    c2.append(int(d[j]))
c1.sort()
c2.sort()
for i in range(len(c1)):
    if c1[i] != c2[i]:
        rlt += 1
if rlt == 0:
    print('yes')
else:
    print('no')