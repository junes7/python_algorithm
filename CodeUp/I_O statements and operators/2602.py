# 성적표 출력하기(print transcript)
# 길동이네 반에서는 이번 중간고사를 국어, 수학, 영어 3과목을 치렀습니다.
# 길동이네 반 학생 3명의 점수를 입력받아 학생의 총점과 과목별 총점을
# 아래와 같이 출력하는 프로그램을 작성하시오.
# 입력파일에는 3명의 국어, 수학, 영어 점수가 보기의 예와 같이 순서대로
# 주어진다.
# 첫째 줄에는 1번 학생의 세 과목 점수와 총점
# 둘째 줄에는 2번 학생의 세 과목 점수와 총점
# 셋째 줄에는 3번 학생의 세 과목 점수와 총점
# 넷째 줄에는 각 과목의 합이 출력된다.
# method 1
n = 4
d = [[0] * n for i in range(n)]
for i in range(n):
    if i != n-1:
        s = 0
        t = list(map(int, input().split()))
        for j in range(n):
            if j < len(t):
                d[i][j] = t[j]
                s += d[i][j] 
            else:
                d[i][j] = s
    elif i == n-1:
        for j in range(n):
            s = 0
            for k in range(n-1):
                s += d[k][j]
            d[i][j] = s

for x in range(n):
    for y in range(n):
        print(d[x][y], end= ' ')
    print()