import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
tree = [[] for _ in range(n+1)]
ans  = [0]*(n+1)
for _ in range(n-1):
    a, b = map(int, input().split())
    tree[a].append(b)
    tree[b].append(a)
# 불필요한 계산을 없애기 위해 루트 부모는 본인으로 설정.
ans[1] = 1
# 부모부터 시작해서 자식노드를 찾기 위해 노드 1번 추가.
temp = [1]
def findParent(root):
    while temp:
        cur = temp.pop()
        for i in tree[cur]:
            if not ans[i]:
                ans[i] = cur
                temp.append(i)
def PrintAns():
    for i in ans[2:]:
        print(i)
findParent(1)
PrintAns()