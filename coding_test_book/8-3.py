# 함수가 종료될 때 어떤 함수를 호출했는지, 현재의 피보나치 수를 출력하도록
# 코드를 만들면 실제로 다이어그램처럼 호출되는 것을 알 수 있다.
# 메모이제이션(Memoization) 공간 생성
d = [0] * 101
def pibo(x):
    print('f(', str(x), ')', sep='', end=' ')
    if x == 1 or x == 2:
        return 1
    if d[x] != 0:
        return d[x]
    else:
        d[x] = pibo(x-1) + pibo(x-2)
        return d[x]
pibo(10)