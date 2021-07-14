# SNS 만들기 7 (create SNS)
# SNS 서비스를 만들자. 친구관계가 입력되면 다음의 물음에 대해 답을 출력.
# 물음) 친구로 가장 많이 추가된 학생은 누구인가?
# 첫번째 줄에 SNS를 이용하는 학생수 n(2 <= n <= 150)이 입력된다.
# n 줄에 걸쳐서 각 학생들의 정보가 다음과 같이 쉼표(,)로 구분되어 입력.
# 이름,성별,나이,친구1,친구2,친구3,...친구10
# *학생들의 이름은 모두 다르다.
# *친구의 수는 최소 1명에서 최대 10명이다.
# 친구로 가장 많이 추가된 학생을 출력하되, 여러 명일 경우, 각 줄에
# 한 명씩 오름차순으로 출력
n = int(input())
d = []
fr = {}
m = []
max = 0
for i in range(n):
    d.append(list(input().split(',')))
for i in range(n):
    cnt = 0
    for j in range(n):
        for k in range(3, len(d[j])):
            if d[j][k] == d[i][0]:
                cnt += 1
    if max < cnt:
        max = cnt
    fr[d[i][0]] = cnt

for key, val in fr.items():
    if val == max:
        m.append(key)
m.sort()
for i in range(len(m)):
    print(m[i])