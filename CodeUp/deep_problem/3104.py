# STL priority_queue
# 피어나라 꿈나무들은 오늘 우선순위 큐에 대해 공부할 것이다.
# STL priority_queue는 큐 내부적으로 내림차순 정렬이 이루어지는 컨테이너이고,
# 원소에 대한 접근은 top()으로만 접근가능하다. 이 컨테이너는 최대 힙과 유사함.
# 관련 명령어들을 익힐 수 있도록 해보자.
# N개의 명령어가 입력되면, 순서대로 동작하는 프로그램을 제작하시오.
# 명령어 설명 :
# push( x ) : x를 큐에 넣는다.(x는 정수) 괄호와 x사이에 공백이 반드시 존재.
# top() : 큐의 top 포인터가 가리키는 값을 출력. 만약 원소가 없다면 -1을 출력.
# pop() : 큐의 첫 번째 원소를 삭제한다.
# size() : 큐안의 원소 개수를 출력한다.
# empty() : 큐가 비어있으면 true, 비어 있지 않으면 false 를 출력한다.
# 첫째줄에 N이 입력된다.(1<=N<=200) 둘째 줄 부터 각 줄에 하나씩 명령어 N개가
# 입력된다.
# 명령어에 따라 동작결과를 순서대로 출력한다. push와 pop은 출력되는 결과가
# 없음에 유의한다.
# method 1
import sys
from queue import PriorityQueue
output = sys.stdout.write
n = int(input())
r = []
pqueue = PriorityQueue()
def pqueueCommand(a):
    if a[0:4] == 'push':
        pqueue.put(int(a[6:len(a)-2])*-1)
    elif a == 'top()':
        if pqueue.qsize() != 0:
            r.append(abs(pqueue.queue[0]))
        else:
            r.append(-1)
    elif a == 'pop()':
        pqueue.get()
    elif a == 'size()':
        r.append(pqueue.qsize())
    else:
        if not pqueue.empty():
            r.append('false')
        else:
            r.append('true')
for i in range(n):
    a = input()
    pqueueCommand(a)
for i in range(len(r)):
    t = str(r[i]) + '\n'
    output(t)