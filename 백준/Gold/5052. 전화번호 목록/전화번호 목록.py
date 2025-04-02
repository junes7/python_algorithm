import sys
input=lambda:sys.stdin.readline().rstrip()
class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False
class Trie:
    def __init__(self):
        self.root = TrieNode()
    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
            if node.is_end_of_word:
                return False  # 현재 노드가 이미 끝나는 전화번호이면 False
        if len(node.children)>0:
            return False  # 현재 삽입이 끝났는데, 이미 다른 접두사가 있음
        node.is_end_of_word = True
        return True
def is_consistent(phone_numbers):
    trie = Trie()
    for number in phone_numbers:
        if not trie.insert(number):
            return False
    return True
import sys
input = sys.stdin.read
data = input().split()
index = 0
t = int(data[index])
index += 1
results = []
for _ in range(t):
    n = int(data[index])
    index += 1
    phone_numbers = []
    for _ in range(n):
        phone_numbers.append(data[index])
        index += 1
    if is_consistent(phone_numbers):
        results.append("YES")
    else:
        results.append("NO")
for result in results:
    print(result)