# 함수로 hello 또는 world 출력하기
# 정수 값 1 또는 2를 전달해, 그 값 매개 변수에 저장하고, 매개 변수에
# 저장된 값을 이용 hello 또는 world를 출력하도록 함수 f() 설계
# method 1
n = int(input())
def f(x):
    if x == 1:
        print('hello')
    elif x == 2:
        print('world')
    else:
        print('\n')
f(n)