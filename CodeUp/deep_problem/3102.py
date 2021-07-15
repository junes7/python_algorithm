# STL stack
# 피어나라 꿈나무들은 오늘 스택에 대해 공부할 것이다. STL stack명령어를
# 익힐 수 있도록 해보자. N개의 명령어가 입력되면, 순서대로 동작하는
# 프로그램을 제작하시오.
# 명령어 설명:
# push( x ) : x를 스택에 넣는다.(x는 정수) 괄호와 x사이에 공백이 반드시
# 존재한다.
# top() : 스택의 top 포인터가 가리키는 값을 출력한다.  만약 원소가 없다면
# -1을 출력한다.
# pop() : 스택의 마지막에 들어온 원소를 삭제한다.
# size() : 스택안의 원소 개수를 출력한다.
# empty() : 스택이 비어있으면 true, 비어 있지 않으면 false 를 출력한다.
# 첫째줄에 N이 입력된다.(1<=N<=200)
# 둘째 줄 부터 각 줄에 하나씩 명령어 N개가 입력된다.
# 명령어에 따라 동작결과를 순서대로 출력한다. push와 pop은 출력되는 결과가 없음에 유의한다.
# method 1
n = int(input())
d = []
r = []
m = ''
def stack(a):
    if a[0:4] == 'push':
        m = a[6:len(a)-2]
        d.append(int(m))
    elif a[0:4] == 'top(':
        if len(d) == 0:
            r.append(-1)
        else:
            r.append(d[len(d)-1])
    elif a[0:4] == 'pop(':
        if len(d) != 0:
            d.pop()
    elif a[0:4] == 'size':
        r.append(len(d))
    else:
        if len(d) == 0:
            r.append('true')
        else:
            r.append('false')
for i in range(n):
    a = input()
    stack(a)
for i in range(len(r)):
    print(r[i])