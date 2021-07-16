# 위상 정렬(topological sort)
# 그래프가 주어지면 위상정렬을 해 보자.
# 어떤 그래프를 위상정렬을 한 결과는 1 -> 2 -> 3 -> 4 -> 5 -> 6이다.
# 우선 순위가 같을 땐 낮은 숫자를 먼저 처리한다.
# 첫째 줄에 정점의 개수 v (2 <= v <= 200)와 간선의 개수 n(1<=n<=700)이
# 입력된다. (만약, v가 6이라면 정점번호는 1~6)
# 둘째 줄 부터 간선의 정보 (a, b)가 쌍으로 입력된다. (a → b를 의미)
# 위상 정렬의 결과를 출력한다. 우선 순위가 같을 땐 정점의 번호가 낮은 것을
# 우선으로 한다. 사이클이 존재하여 위상정렬을 할 수 없다면 -1을 출력한다.
# method 1 with bfs
from collections import deque
v, n = map(int, input().split())
d = []
for i in range(n):
    d.append(list(map(int, input().split())))
# def topo_sort(d):
#     queue = deque()
#     for i in range(n):
        




