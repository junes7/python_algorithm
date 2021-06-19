# 함수로 prime 또는 composite 출력하기(print prime or composite)
# 소수(prime)가 입력되면 prime, 합성수(composite)가 입력되면 composite
# 를 출력한다.
# method 1
d = int(input())
def f(n):
    cnt = 0
    for i in range(2, n+1):
        if n % i == 0:
            cnt += 1
    print('prime' if cnt == 1 else 'composite')
f(d)