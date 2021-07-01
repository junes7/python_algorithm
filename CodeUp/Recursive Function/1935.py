# LCA
# 21억 이하로 구성된 완전 이진 트리가 있다. 노드의 번호는 루트 노드에서부터
# 상->하, 좌->우 방향으로 1, 2, 3, 4, ... 로 차례대로 부여된다. 이때 두
# 노드 a, b의 가장 가까운 공통 조상(LCA: LowestCommonAncestor)노드를
# 찾아서 출력하시오. 예를 들어, 3번 노드와 4번 노드의 LCA는 1번 노드이다.
# 그리고 6번 노드와 7번 노드의 LCA는 3번 노드이다.
# method 1
a, b = map(int, input().split())
def LCA(a, b):
    if a == b:
        return a
    elif a > b:
        return LCA(a//2, b)
    elif a < b:
        return LCA(a, b//2)
print(LCA(a, b))