# SNS 만들기 6 (create SNS)
# SNS 서비스를 만들자. 친구관계가 입력되면 다음의 물음에 대해 답을 출력.
# 물음) A학생의 친구들은 남/여 각각 몇 명인가?
# 첫번째 줄에 SNS를 이용하는 학생수 n(2 <= n <= 150)이 입력된다.
# n 줄에 걸쳐서 각 학생들의 정보가 다음과 같이 쉼표(,)로 구분되어 입력.
# 이름,성별,나이,친구1,친구2,친구3,...친구10
# *학생들의 이름은 모두 다르다.
# *친구의 수는 최소 1명에서 최대 10명이다.
# 마지막 줄에 A학생의 이름이 입력된다.
# 첫 줄에 A학생의 남자 친구들의 수 | 두번째 줄에 A학생의 여자 친구들 수
# method 1
n = int(input())
d = []
fr = []
m, f = 0, 0
for i in range(n):
    d.append(list(input().split(',')))
c = input()
for i in range(n):
    if d[i][0] == c:
        for j in range(3, len(d[i])):
            fr.append(d[i][j])
for i in range(len(fr)):
    for j in range(n):
        if d[j][0] == fr[i]:
            if d[j][1] == 'F':
                f += 1
            elif d[j][1] == 'M':
                m += 1
print(m, f, sep='\n')