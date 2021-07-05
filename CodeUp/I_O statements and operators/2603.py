# 성적 그래프 출력하기(print transcript graph)
# CS 고등학교에서는 지필 평가에서 10개의 과목을 평가한다. 성적 처리를
# 맡은 정보 선생님은 올해부터 자신의 성적을 막대 그래프로 나타내기로
# 결정했다. 하지만 일일이 그래프를 그리기에는 시간이 너무 걸리므로
# 이를 프로그램화 하려고 한다. 10개의 과목 점수가 입력되면 막대그래프로
# 출력하는 프로그램을 작성하시오.
# 10점당 #을 하나씩 추가해서 출력하고, 10점 미만은 #을 출력하지 않는다.
# 즉, 100점은 #이 10개이다. 그래프 형식은 입출력 예시를 참고한다.
# 10과목의 점수가 공백으로 구분되어 입력된다. 각 과목 점수는 0~100점이다.
# 입력된 점수에 따라 입출력예시를 참고하여 막대 그래프를 출력한다.
# method 1
d = [[' '] * 10 for i in range(10)]
t = list(map(int, input().split()))
for i in range(10):
    s = t[i]//10
    for j in range(10-s, 10):
        d[j][i] = '#'
for x in range(10):
    for y in range(10):
        print(d[x][y], end=' ')
    print()