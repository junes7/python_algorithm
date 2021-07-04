# 코드 네임(CodeName)
# 어떤 회사에서는 이름을 사용하지 않고 코드네임을 사용한다. 이때 코드네임을
# 만드는 방법이 있는데 자신의 성을 제외한 이름만 영어로 바꾸어서 뒤집어
# 읽는것이라고 한다. 이 때 n명의 사람의 영어 이름이 입력될 때 n명의 코드네임을
# 출력하시오.
# 첫째줄에 n명이 입력된다. 2번째줄부터 n명의 영어이름이 입력된다. 각줄에 걸쳐
# n명의 코드 네임을 출력하시오.
# method 1
n = int(input())
d = []
for i in range(n):
    d.append(input())
for i in range(n):
    t = d[i]
    for j in range(len(t)-1, -1, -1):
        print(t[j], end='')
    print()