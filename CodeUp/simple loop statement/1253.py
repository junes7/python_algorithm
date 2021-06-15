# a 부터 b 까지 출력하기(print from a to b)
# 어떤 두 수 a, b가 있을 때 두 수 사이의 모든 정수를
# 오름차순(ascending)으로 출력하시오.
a, b = map(int, input().split())
if a > b:
    t = a
    a = b
    b = t
for i in range(a, b+1):
    print(i, end=' ')