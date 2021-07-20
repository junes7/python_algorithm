# a+b, a-b, a*b (find median value)
# 두 정수 a, b에 a+b, a-b, a*b 연산을 적용한다.이 연산의 결과의 중앙 값을
# 출력하시오. 중앙 값이란 숫자를 크기 순서로 정렬했을 때, 가장 중앙에
# 위치한 값을 말한다.
# 정수 a, b가 공백으로 분리되어 입력된다.(-10,000 <= a, b <=10,000)
# 연산 결과의 중앙값을 출력한다.
# method 1
a, b = map(int, input().split())
c = a + b
d = a - b
e = a * b
m = 0
if c >= d:
    if d >= e:
        m = d
    elif e >= c:
        m = c
    else:
        m = e
elif e < c:
    m = c
elif d > e:
    m = e
else:
    m = d
print(m)