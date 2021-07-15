# 트리의 중위 순회(Inorder Traversal of Tree)
# 입력된 이진 트리를 중위순회해보자.
# 중위 순회의 방법은 다음과 같다.
# 1. 왼쪽 서브트리를 중위 순회한다.
# 2. 노드를 방문한다.
# 3. 오른쪽 서브 트리를 중위 순회한다.
# 예를 들어 abcdefg가 입력되면, 다음 완전 이진 트리(Complete Binary
# Tree)가 구축된다.
# 이진 트리 조건
# 루트 노드를 중심으로 두 개의 서브 트리로 나뉘어진다.
# 나뉘어진 두 서브 트리도 모두 이진 트리이어야 한다.
# 이 트리를 중위순회한 결과를 출력하시오.
# 문자열이 입력된다. (1 <= 문자열의 길이 <= 10,000)
# 알파벳의 소문자가 26자이므로 중복된 노드가 입력될 수 있다.
# 전위 순회한 결과를 출력한다.
# method 1
class Node :
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    def __str__(self):
        return str(self.data)
class Tree:
    def __init__(self):
        self.root = None
    def InorderTraversal(self, node):
        if not node.left == None: self.InorderTraversal(node.left)
        print(node, end='')
        if not node.right == None: self.InorderTraversal(node.right)
    def makeRoot(self, node, leftNode, rightNode):
        if self.root == None:
            self.root = node
        node.left = leftNode
        node.right = rightNode
c = input()
node = []
for i in range(len(c)):
    node.append(Node(c[i]))
mTree = Tree()
l = int(len(node)/2)
for i in range(l):
    if i == l-1:
        if (i*2+2) < len(node):
            mTree.makeRoot(node[i], node[i*2+1], node[i*2+2])
        else:
            mTree.makeRoot(node[i], node[i*2+1], None)
    else:
        mTree.makeRoot(node[i], node[i*2+1], node[i*2+2])
mTree.InorderTraversal(mTree.root)