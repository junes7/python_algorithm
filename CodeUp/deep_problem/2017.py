# 진법 변환(convert notation)
# 두 정수 n과 k가 입력된다. n을 k진법으로 변환한 결과를 출력하시오.
# (진법에 사용되는 수: 0, 1, ... , 8, 9, A, B, ..., Z 순 입니다.)
# 정수 n과 k가 공백으로 분리되어 입력된다. ( 0 <= n <= 200,000,000 ),
# (2 <= k <= 36) | n을 k진법으로 변환한 결과를 출력한다. 알파벳은
# 대문자로 출력합니다.
# method 1
n, k = map(int, input().split())
d = []
def conv_notation(n, k):
    if n == 0:
        return
    else:
        if n % k < 10:
            d.append(n % k)
        else:
            d.append(chr((n % k) + 55))
        return conv_notation(n//k, k)
if n == 0:
    d.append(0)
else:
    conv_notation(n, k)
for i in range(len(d)-1, -1, -1):
    print(d[i], end='')