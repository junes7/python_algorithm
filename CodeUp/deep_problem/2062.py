# Up 2
# 재현이는 Up 1 문제에서 자기의 집을 띄우는데 성공하였다! 하지만 헬륨이
# 빠지면서 집은 다시 땅으로 내려오게 되었다. 헬륨이 왜 빠졌는지를 보자
# 풍선의 위치가 문제인 것을 알게 되었다. 지붕에는 층이 있다. 층은 0부터
# 9까지이다. 재현이는 지붕의 0층에 모든 풍선을 달자 연결부위가 약해져서
# 풍선이 날아간 것으로 추측한다. 재현이는 그래서 각 층에는 서로 최대한 많이
# 연결되어 있는 곳에만 풍선을 달려고 한다.
# 첫번째 줄에 m, n이 입력된다.(1<=m,n<=19) 두번째 줄에 지붕의 지도가
# m*n형식으로 입력된다. 숫자는 층이고 -1은 풍선을 달 수 없는 곳이다.
# 풍선의 최대수를 각 층마다 출력한다. 0개인 층은 출력하지 않아도 된다. 또한,
# 층은 오름차순으로 출력한다.
# method 1
m, n = map(int, input().split())
d = []
cnt = [0] * 10
for i in range(m):
    d.append(list(map(int, input().split())))
for i in range(m):
    for j in range(n):
        if d[i][j] < 0:
            continue
        else: # d[i][j] >= 0
            cnt[d[i][j]] += 1
for i in range(len(cnt)):
    if cnt[i] != 0:
        print(i, cnt[i])