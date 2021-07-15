# 큐 자료구조
# 삽입(5) - 삽입(2) - 삽입(3) - 삽입(7) - 삭제() - 삽입(1) - 삽입(4) - 삭제()
# collections의 deque 라이브러리와 append(), popleft(), reverse()을 사용해 구현
from collections import deque

queue = deque()
queue.append(5)
queue.append(2)
queue.append(3)
queue.append(7)
queue.popleft()
queue.append(1)
queue.append(4)
queue.popleft()

print(queue)
queue.reverse()
print(queue)

#  최대공약수(GCD Greatest Common Divisor) 구하기
def gcd(a, b):
    if a % b == 0:
        return b
    else:
        return gcd(b, a % b)