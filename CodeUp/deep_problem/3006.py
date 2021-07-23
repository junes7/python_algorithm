# 완전 제곱수 찾기(Find perfect squares)
# k×k=k2 을 만족하는 k2을 완전 제곱수라고 한다.
# n개의 숫자 a1,a2,a3,...,an가 제시되면, 각각의 수보다 같거나 작은 가장 큰
# 완전 제곱수를 구하여라. 단 이 문제는 코드에 sqrt라는 텍스트를 사용할 수 없다.
# 첫째줄에 n가 입력된다.(1<=n<=10) 둘째 줄부터 각 줄에 하나씩 ai가 입력된다.
# (1<=ai<=4,000,000,000,000,000,000) 각 줄에 ai를 넘지 않는 가장 큰
# 완전제곱수를 출력한다.
# method 1
import sys
input = sys.stdin.readline
n = int(input())
d = []
for i in range(n):
    t = int(input())
    b = int(t ** (1/2))
    while True:
        if b * b > t:
            d.append((b-1) * (b-1))
            break
        b += 1
for i in range(n):
    print(d[i])
