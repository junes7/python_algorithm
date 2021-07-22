# 교수님 B-라도 좋으니까 C만은...(calculate grade point average)
# 테기는 열심히 공부했다. 비오는 날에도, 눈오는 날에도, 다른 친구들이 놀 때도
# 공부만 했다. 하지만 그의 성적은 처참했다.
# "아니야! 내가 얼마나 열심히 했는데!!! 내 성적이 C+일리가 없어! 그럴리
# 없다고!!! 그래 사실 B-인데 교수님께서 잘못 누르셔서 C+이 된걸거야!"
# 테기는 계속 현실을 부정했다. 테기를 놀리기 좋아하는 류빈이는 테기를 놀리기
# 위해서 학점 계산기를 만들어서 현실을 알려주려 한다. 테기에게 현실을 알려주자.
# 1번 줄에 과목의 수 n이 주어진다.
# 2~n+1번 줄에 과목명, 평어, 학점이 주어진다.
# 과목명은 영문 20자 이하이며 공백은 주어지지 않는다. (1<=n<=29)
# 출력 예시를 참고하여 학점 평균, 재수강 해야할 과목들의 목록을 출력한다. 단,
# 학점평균은 소수점 2자리수까지 반올림하여 출력하고, 재수강 과목은 입력받은
# 순서대로 출력한다.
n = int(input())
d = []
retake = []
cnt = 0
sum, csum = 0.0, 0
for i in range(n):
    d.append(list(input().split()))
for i in range(n):
    if d[i][1] == 'A+':
        t = 4.3
    elif d[i][1] == 'A0':
        t = 4.0
    elif d[i][1] == 'A-':
        t = 3.7
    elif d[i][1] == 'B+':
        t = 3.3
    elif d[i][1] == 'B0':
        t = 3.0
    elif d[i][1] == 'B-':
        t = 2.7
    elif d[i][1] == 'C+':
        t = 2.3
    elif d[i][1] == 'C0':
        t = 2.0
    elif d[i][1] == 'C-':
        t = 1.7
    elif d[i][1] == 'D+':
        t = 1.3
    elif d[i][1] == 'D0':
        t = 1.0
    elif d[i][1] == 'D-':
        t = 0.7
    elif d[i][1] == 'F':
        t = 0.0
    elif d[i][1] == 'Pass':
        t = 4.3
    elif d[i][1] == 'Fail':
        t = 0.0
    if t < 2.5:
        retake.append([d[i][0], d[i][1]])
        cnt += 1
    sum += t * int(d[i][2])
    csum += int(d[i][2])
avg = round((sum/csum), 2)
if avg >= 4.30:
    gpa = 'A+'
elif avg >= 4.00:
    gpa = 'A0'
elif avg >= 3.70:
    gpa = 'A-'
elif avg >= 3.30:
    gpa = 'B+'
elif avg >= 3.00:
    gpa = 'B0'
elif avg >= 2.70:
    gpa = 'B-'
elif avg >= 2.30:
    gpa = 'C+'
elif avg >= 2.00:
    gpa = 'C0'
elif avg >= 1.70:
    gpa = 'C-'
elif avg >= 1.30:
    gpa = 'D+'
elif avg >= 1.00:
    gpa = 'D0'
elif avg >= 0.70:
    gpa = 'D-'
else:
    gpa = 'F'
print('Average :', '%.2f' % avg, '(%s)' % gpa)
print()
print('RETAKE NEEDED', '(%d)' % cnt)
if cnt > 0:
    for i in range(len(retake)):
        print('', retake[i][0], '(%s)' % retake[i][1])