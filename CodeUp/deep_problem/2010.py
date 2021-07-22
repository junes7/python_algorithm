# 루트 문제(?) (root problem)
# 양의 정수 B와 N이 입력되면, A^N이 B와 가장 가까운 수가 되는 A를 출력하시오.
# A^N은 B보다 크거나 작거나 같다.
# 양의 정수 B와 N이 입력된다. ( 1 <= B <= 1,000,000 , 1 <= N <= 9 )
# A를 출력한다.
# method 1
def pow(i, n):
    m = 1
    for j in range(n):
        m *= i
    return m
b, n = map(int, input().split())
a = 0
for i in range(1, b+1):
    if pow(i, n) >= b:
        a = i
        break
a = a-1 if (pow(a, n) - b) >= (b - pow(a-1, n)) else a
print(a)