# 아이콘 확대
# icon zoom
# 3 * 3의 아이콘을 k배 확대하여 출력하기 기본 아이콘 모양은 다음과 같다.
# *x*
#  xx
# *	*
# 양의 정수 k가 입력된다.(k < 25)
# 기본 아이콘을 k배 확대하여 출력한다.
# method 1
d = [['*','x','*'],[' ','x','x'],['*',' ','*']]
k = int(input())
for i in range(3):
    for l in range(k):
        for j in range(3):
            print(d[i][j] * k, end='')
        print()