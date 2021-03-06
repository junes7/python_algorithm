# 제곱수 만들기
# n이 입력되면 K를 빼서 제곱수를 만들 수 있는 k를 구하고, 그 제곱수에
# 루트를 씌운 수(제곱근) t를 구하여라. 이 때 k는 여러가지가 될 수 있는데
# 가장 작은 K를 출력한다. | k와 t를 출력한다.
# method 1
n = int(input())
k, t = 0, 0
while t ** 2 <= n:
    t += 1
t -= 1
k = n - t ** 2
print(k, t)