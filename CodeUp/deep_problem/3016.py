# 1등한 학생의 성적(grade of first place student)
# 세종이는 정보과학 선생님인 JH를 도와주기 위해 정보과학 성적처리 프로그램을
# 만들기로 했다. JH  선생님은 특정 과목에서 1등한 학생이 다른 과목에서는 어떤
# 성적을 얻었는지 관심이 많다. 다음 조건을 만족하는 프로그램을 작성해 보자.
# 첫째 줄에 데이터의 개수 n (3<=n<=100)과 둘째 줄부터 n+1줄에 학생 이름과
# 3과목 점수들이 공백으로 구분되어 입력된다. (입력 예시 참고) 단 이름의 길이는
# 최대 10바이트 이내이다.
# 첫 번째 과목을 1등한 학생의 이름과 두 번째, 세 번째 과목의 석차를 공백으로
# 구분하여 출력한다. 단 첫 번째 과목의 1등은 1명이라고 가정한다.
# method 1
n = int(input())
d = []
t2, t3 = 0, 0
for i in range(n):
    name, s1, s2, s3 = input().split()
    s1 = int(s1)
    s2 = int(s2)
    s3 = int(s3)
    d.append([name, s1, s2, s3])
d1 = sorted(d, key=lambda x : x[1], reverse=True)
print(d1[0][0], end=' ')
d2 = sorted(d, key=lambda x : x[2], reverse=True)
d3 = sorted(d, key=lambda x : x[3], reverse=True)
for i in range(n):
    if d2[i][2] == d1[0][2]:
        t2 = i + 1
        break
for i in range(n):
    if d3[i][3] == d1[0][3]:
        t3 = i + 1
        break
print(t2, t3)