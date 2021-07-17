# 하노이 탑 1(Hanoi Tower)
# 하노이 탑 문제를 프로그래밍해보자.
# 하노이탑의 규칙은 다음과 같다.
# 1. 각 탑의 제일 위의 원판만 이동할 수 있다.
# 2. 한번에 하나의 원판을 이동할 수 있다.
# 3. 이동하는 원판보다 작은 원판 위로는 이동할 수 없다. (반드시 큰
# 원판이 아래에 있어야 한다.)
# 원판의 개수가 주어질 때 이동하는 최단 경로를 출력하시오.
# 원판의 개수가 입력된다.(1<=n<=10)
# 원판이 이동되는 최단 경로를 양식에 맞추어 출력하시오.
# method 1
n = int(input())
def HanoiTower(num, fr, by, to):
    if num == 1:
        print('Disk', num, ':', fr, 'to', to)
    else:
        HanoiTower(num-1, fr, to, by)
        print('Disk', num, ':', fr, 'to', to)
        HanoiTower(num-1, by, fr, to)
HanoiTower(n, 'A', 'B', 'C')