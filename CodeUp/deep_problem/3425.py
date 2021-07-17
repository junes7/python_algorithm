# The Tower of Hanoi II
# 하노이 탑 게임에 대한 규칙은 잘 알고 있을 것이다.
# 위 그림은 3개의 원판을 가지는 하노이 탑을 나타낸다. 이 게임의 목적은
# A탑에 있는 1 ~3번까지의 원반을 C탑으로 모두 옮기는 것이다. 단, 다음
# 규칙을 지키면서 옮겨야 한다. 그리고 하노이2에서는 새로운 규칙 4)가
# 추가되었다.
# 1) 한 번에 하나의 원판만 옮길 수 있다.
# 2) 반드시 큰 원판 위에 작은 원판이 올라가야 한다.
# 3) 각 탑의 맨 위에 있는 원판만 옮길 수 있다.
# 4) 반드시 인접한 기둥으로만 원판을 옮길 수 있다.
# 만약 원판이 1개 라면,
# - 1번 원판을 A에서 B로 옮긴다.
# - 1번 원판을 B에서 C로 옮긴다.
# 따라서 총 2번을 옮기면 모두 옮길 수 있다.
# 여러분은 n개의 원판이 주어질 때 이 원판을 옮기는 횟수 및 과정을
# 출력하는 프로그램을 작성하시오.
# 첫 줄에 한 정수 n이 입력된다.(단, 1 <= n <= 12)
# 첫 번째 줄부터 한 줄에 하나씩 이동 경로를 "n : X->Y"행태로 출력한다.
# 마지막 줄에 총 옮긴 횟수를 출력한다.
# 경로의 의미는 n번원판을 X기둥에서 Y기둥으로 옮긴다는 의미이다.
# method 1
n = int(input())
def HanoiTowerNum(num):
    if num == 1:
        return 2
    else:
        return HanoiTowerNum(num-1) * 3 + 2
def HanoiTower(num, fr, by, to):
    if num == 1:
        print('%d : %c->%c' % (num, fr, by))
        print('%d : %c->%c' % (num, by, to))
    else:
        HanoiTower(num-1, fr, by, to)
        print('%d : %c->%c' % (num, fr, by))
        HanoiTower(num-1, to, by, fr)
        print('%d : %c->%c' % (num, by, to))
        HanoiTower(num-1, fr, by, to)
HanoiTower(n, 'A', 'B', 'C')
print(HanoiTowerNum(n))