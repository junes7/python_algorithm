# 사다리 게임(ladder game)
# 그는 긴 사다리도 쉽게 결과를 알 수 있게 사다리 타기 게임의 결과를 구하는
# 프로그램을 작성하려고 한다. 주영이를 도와주는 프로그램을 만들자.
# 프로그램은 다음과 같이 진행된다.
# 1. 세로 선의 개수 k와 한 선과 다른 선을 연결하는 선의 개수 n이 입력된다.
# (단, 2 <= k<=100, 0 <= n <= 100,000)
# 2. n+1줄까지 두 개의 선 번호가 입력된다. 이는 두 선이 연결되었다는 뜻이다.
# 두 선의 번호는 1 차이다. 단, 선의 순서는 입력 순서다.
# (1 2후 2 3이 입력되었을 경우 1에서 시작하면 1-2가 먼저이니 2로 이동한 후
# 2-3이 다음이니 3으로 다시 이동한다.)
# 3. 시작 선의 번호가 주어진다.
# 첫째줄에 세로 선의 개수 k와 가로 선의 개수 n이 입력된다.
# 둘째 줄 ~  n+1줄까지 두 개의 선 번호가 입력된다.
# n+2번째 줄에 사다리를 타는 시작 위치 번호(p)가 입력된다.
# p위치에서 시작하여 사다리를 탄 결과 도착하는 위치를 출력하시오.
# method 1
k, n = map(int, input().split())
d = []
for i in range(n):
    a, b = map(int, input().split())
    d.append((a, b))
p = int(input())
for i in range(n):
    if d[i][0] == p:
        p = d[i][1]
    elif d[i][1] == p:
        p = d[i][0]
print(p)