# 트리의 전위 순회(Preorder Traversal of Tree)
# 입력된 이진 트리를 전위 순회해보자.
# 전위 순회의 방법은 다음과 같다.
# 1. 노드를 방문한다.
# 2. 왼쪽 서브 트리를 전위 순회한다.
# 3. 오른쪽 서브 트리를 전위 순회한다.
# 예를 들어 abcdefg가 입력되면, 다음 완전 이진 트리(Complete Binary Tree)가 구축된다.
# 이 트리를 전위 순회한 결과를 출력하시오.
# 문자열이 입력된다. (1 <= 문자열의 길이 <= 10,000)
# 알파벳의 소문자가 26자이므로 중복된 노드가 입력될 수 있다.
# 전위 순회한 결과를 출력한다.
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    def __str__(self):
        return str(self.data)
class Tree:
    def __init__(self):
        self.root = None
    def PreorderTraversal(self, node):
        print(node, end='')
        if not node.left == None: self.PreorderTraversal(node.left)
        if not node.right == None: self.PreorderTraversal(node.right)
    def makeRoot(self, node, leftNode, rightNode):
        if self.root == None:
            self.root = node
        node.left = leftNode
        node.right = rightNode
c = input()
node = []
for i in range(len(c)):
    node.append(Node(c[i]))
t = int(len(node)/2)
mTree = Tree()
for i in range(t):
    if i == t-1:
        if (i*2+2) < len(node):
            mTree.makeRoot(node[i], node[i*2+1], node[i*2+2])
        else:
            mTree.makeRoot(node[i], node[i*2+1], None)
    else:
        mTree.makeRoot(node[i], node[i*2+1], node[i*2+2])
mTree.PreorderTraversal(mTree.root)