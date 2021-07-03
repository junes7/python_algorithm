# hello(print hello)
# hello라는 글자를 n번 반복 출력하는 프로그램을 작성하시오. 예를 들어 n이 5가
# 입력되면, hello를 5줄에 걸쳐 출력한다.
# 입력으로 정수 n이 입력된다. | hello를 n줄에 걸쳐서 출력한다.
# method 1
n = int(input())
for i in range(n):
    print('hello')