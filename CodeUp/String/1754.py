# 큰 수 비교(compare large number)
# 우리는 숫자를 int나 long long으로 숫자를 처리하였다.
# 이번엔 그보다 더 큰 숫자를 비교해보자.
# 최대 100자리의 두 숫자가 입력, 작은수와 큰 수를 차례대로 출력하시오.
# method 1
a, b = map(int, input().split())
if a > b:
    t = a
    a = b
    b = t
print(a, b)