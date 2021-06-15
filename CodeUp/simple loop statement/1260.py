# 3의 배수의 합(sum of multifple of three)
# 어떤 수 a, b가 주어진다. 관계는 a <= b 이다.
# a에서 b까지의 수 중 3의 배수만 더하여 출력.
# method 1
a, b = map(int, input().split())
s = 0
for i in range(a, b+1):
    if i % 3 == 0:
        s += i
print(s)