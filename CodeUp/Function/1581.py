# (함수 작성+포인터) swap 함수 만들기 (Call by Reference)
# create swap function by using call by reference
# 함수명:myswap, 매개 변수: 정수형 포인터 변수 2개, 반환 형: 없음(void)
# 함수 내용: 첫 번째 포인터가 가리키는 변수의 값이 두 번째 포인터가
# 가리키는 변수의 값보다 클 경우 두 값을 서로 바꾼다.
# method 1
a, b = map(int, input().split())
def myswap(x, y):
    if x > y:
        t = x
        x = y
        y = t
    a, b = x, y
    print('%d' % a, '%d' % b)
myswap(a, b)