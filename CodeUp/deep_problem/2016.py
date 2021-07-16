# 천단위 구분기호(thousands separator)
# 큰 수를 표현할 때 자릿수를 쉽게 구분하기 위해 천단위 구문 기호인 콤마(,)를
# 사용한다. 어떤 수가 입력되면 천단위 구분 기호를 넣어 그 수를 다시 출력하는
# 프로그램을 작성하시오.
# 첫째 줄에 숫자의 길이 n이 입력. (1≤n≤200) 둘째 줄에 길이가 n인 숫자가
# 입력.
# 천단위 구분기호 콤마를 넣어 출력하시오.
# method 1
n = int(input())
t = n // 3
if n % 3 == 0:
    r = 3
else:
    r = n % 3
d = []
s = input()
i, cnt = 0, 0
while cnt != len(s):
    if i == r:
        d.append(',')
        r += 4
    else:
        d.append(s[cnt])
        cnt += 1
    i += 1
for i in range(len(d)):
    print(d[i], end='')