# SNS 만들기 2 (create SNS)
# SNS 서비스를 만들자. 친구관계가 입력되면 다음의 물음에 대해 답을 출력.
# 물음) 학생들의 평균 나이는 몇 살인가?
# 첫번째 줄에 SNS를 이용하는 학생수 n(2 <= n <= 150)이 입력된다.
# n 줄에 걸쳐서 각 학생들의 정보가 다음과 같이 쉼표(,)로 구분되어 입력.
# 이름,성별,나이,친구1,친구2,친구3,...친구10
# *학생들의 이름은 모두 다르다.
# *친구의 수는 최소 1명에서 최대 10명이다.
# 학생들의 평균 나이(소수점 이하 3째자리에서 반올림하여 2째자리까지 출력)
# method 1
n = int(input())
d = []
age = 0
for i in range(n):
    d.append(list(input().split(',')))
for i in range(n):
    age += int(d[i][2])
print('%.2f' % (float)(age/n))