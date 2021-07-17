# 하노이 탑 2(Hanoi Tower)
# n이 입력으로 주어진다. n개의 원판을 사용했을때의 하노이 탑 문제의
# 원판의 최소 이동 횟수를 출력한다. (단, 1<=n<=20)
# n이 입력된다.(1<=n<=20) | 최소 이동 횟수를 출력한다.
# 1 1
# 2 3
# 3 7
# 4 15
# method 1
n = int(input())
def HanoiTowerNum(num):
    if num == 1:
        return 1
    else:
        return HanoiTowerNum(num-1) * 2 + 1
print(HanoiTowerNum(n))