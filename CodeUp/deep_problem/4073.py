# 진법 변환(convert notation)
# 임의의 십진수 n을 10개의 다양한 진법으로 변환하여 출력하려고 한다.
# 11진법 이상으로 변환할 때는 부족한 숫자를 알파벳으로 대신하여, 수
# '10~35'는 'A~Z'를 사용한다.
# 예를 들어, 16진법을 사용할 때 십진수 ‘10’은 ‘A’로, 십진수 ‘15’는
# ‘F’로 표시한다.
# 십진수 n을 10개의 다양한 진법으로 변환하는 프로그램을 작성하시오.
# 1. 첫 행에는 임의의 십진수 n이 주어진다. (단, 1≤n≤2,147,483,647)
# 2. 둘째 행에는 변환을 원하는 진법 10개가 빈 칸으로 구분되어 주어진다.
# (단, 변환을 원하는 진법은 2진법부터 36진법까지이다.)
# 1. 첫 행에는 진법에 맞게 변환된 수를 빈 칸으로 구분하여 출력한다.
n = int(input())
d = []
k = list(map(int, input().split()))
def conv_notation(n, k):
    if n == 0:
        for i in range(len(d)-1, -1, -1):
            print(d[i], end='')
        print(' ', end='')
        d.clear()
        return
    else:
        if n % k < 10:
            d.append(n % k)
        else: # n % k >= 10
            d.append(chr(n % k + 55))
        return conv_notation(n//k, k)
for i in range(len(k)):
    conv_notation(n, k[i])