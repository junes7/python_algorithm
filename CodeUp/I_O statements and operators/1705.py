# 3 6 9 게임(three six nine game)
# 기은이는 17년 동안 단 한번도 369 게임을 틀리지 않은 369게임의 달인이다.
# 기은이는 369게임에서 절대 틀리지 않는 탁월한 능력을 가지고 있다. 기은이가
# 369게임에서 자신의 차례가 되었을때 무엇을 내야 하는지 알아내는 프로그램을
# 작성하시오. | ※ 369게임의 룰은 다음과 같다. 1. 자신의 차례가 되었을 때
# 숫자에 3이나 6이나 9가 한 번 들어가면 "K"를 출력한다. 2. 만약 숫자에 3이나
# 6이나 9가 두 번 들어가면 "KK", 세 번 들어가면 "KKK"를 출력한다. 4. 이 게임은
# 숫자 999가 되면 무조건 끝이난다. 5. 그 외 숫자들은 그냥 그대로 출력한다.
# method 1
n = int(input())
def tsn(n, t, cnt):
    if t == 1:
        if n == 3 or n == 6 or n == 9:
            cnt += 1
        return cnt
    else:
        if n // t == 3 or n // t == 6 or n // t == 9:
            cnt += 1
        n %= t
        t //= 10
        return tsn(n, t, cnt)
cnt = tsn(n, 100, 0)
if cnt == 1:
    print('K')
elif cnt == 2:
    print('KK')
elif cnt == 3:
    print('KKK')
else:
    print(n)