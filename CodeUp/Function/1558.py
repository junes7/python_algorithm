# 함수로 정수 뒤집어 리턴하기
# return flip the integer through function
# long long int형 정수 한 개를 입력 받아 숫자를 거꾸로 뒤집은 수를 출력
# 마지막 1의 자리의 수가 0인 수는 입력되지 않는다.
# 예를 들어 1234567을 거꾸로 뒤집은 수는 7654321 이다.
# method 1
x = int(input())
def f(n):
    d = []
    r = 1
    while n > 0:
        d.append(n % 10)
        n//=10
        r*=10
    t = 0
    for i in range(len(d)):
        r//=10
        t += d[i] * r
    return t
print('%ld' % f(x))