# 두 노드간의 거리(Distance between two nodes)
# 21억 이하로 구성된 완전 이진 트리가 있다. 노드의 번호는 루트 노드에서부터
# 상->하, 좌->우 방향으로 1, 2, 3, 4, ...로 차례대로 부여된다. 이 때 두
# 노드 a, b의 거리를 구하고자 한다. 예를 들어, 3번 노드와 4번 노드의
# 거리는 3이고, 4번 노드와 5번 노드의 거리는 2이다.
# method 1
a, b = map(int, input().split())
def dist(a, b):
    if a == b:
        return 0
    elif a > b:
        return dist(a//2, b) + 1
    elif a < b:
        return dist(a, b//2)+ 1
print(dist(a, b))