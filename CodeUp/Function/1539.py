# 함수로 false 또는 true 출력하기 (print false or true through functon)
# 0이 입력되면 false, 그 외에는 true를 출력한다.
# method 1
d = int(input()) 
def f(n):
    print('false' if n == 0 else 'true')
f(d)