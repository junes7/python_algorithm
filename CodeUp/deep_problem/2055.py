# 두 수의 약수 구하기(get the factors of two numbers)
# 두 정수 a, b의 약수를 모두 출력하는 프로그램을 작성하시오.
# 두 정수 a, b가 입력된다. (1 <= a <= b <= 1,000,000,000)
# 두 정수 a, b의 약수를 오름차순으로 출력한다. (중복된 약수는
# 한번만 출력한다.)
# method 1
a, b = map(int, input().split())
d = []
ra, rb = int(a ** (1/2)), int(b ** (1/2))
for i in range(1, ra+1):
    if a % i == 0:
        if i not in d:
            d.append(i)
        if a//i not in d:
            d.append(a//i)
for j in range(1, rb+1):
    if b % j == 0:
        if j not in d:
            d.append(j)
        if b//j not in d:
            d.append(b//j)
d.sort()
for i in range(len(d)):
    print(d[i], end=' ')