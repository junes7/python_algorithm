# The Tower of Hanoi I
# 하노이 탑 게임에 대한 규칙은 잘 알고 있을 것이다.
# 위 그림은 3개의 원판을 가지는 하노이 탑을 나타낸다. 이 게임의 목적은
# A탑에 있는 1~3번까지의 원반을 C탑으로 모두 옮기는 것이다. 단, 다음
# 규칙을 지키면서 옮겨야 한다.
# 1) 한 번에 하나의 원판만 옮길 수 있다.
# 2) 반드시 큰 원판 위에 작은 원판이 올라가야 한다.
# 3) 각 탑의 맨 위에 있는 원판만 옮길 수 있다.
# 위의 그림의 경우는 다음과 같이 옮기면 된다.
# move disk 1 A->C 
# move disk 2 A->B 
# move disk 1 C->B 
# move disk 3 A->C 
# move disk 1 B->A 
# move disk 2 B->C 
# move disk 1 A->C
# 따라서 총 7번을 옮기면 모두 옮길 수 있다. 여러분은 n개의 원판이
# 주어질 때 이 원판을 옮기는 횟수 및 과정을 출력하는 프로그램을 작성.
# 첫 줄에 한 정수 n이 입력된다. (단, 1 <= n <= 10 )
# 첫 번째 줄에 총 횟수 T를 출력하고 다음 줄 부터 T+1번째 줄까지 이동
# 경로를 "N번 원판을 X->Y"행태로 출력한다.
# method 1
n = int(input())
def HanoiTowerNum(num):
    if num == 1:
        return 1
    else:
        return HanoiTowerNum(num-1) * 2 + 1
def HanoiTower(num, fr, by, to):
    if num == 1:
        print('move disk %d %c->%c' % (num, fr, to))
    else:
        HanoiTower(num-1, fr, to, by)
        print('move disk %d %c->%c' % (num, fr, to))
        HanoiTower(num-1, by, fr, to)
print(HanoiTowerNum(n))
HanoiTower(n, 'A', 'B', 'C')