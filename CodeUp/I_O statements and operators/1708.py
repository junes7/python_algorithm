# 순위 구하기(Get Rank)
# 학생의 점수를 입력받아 순위를 구하는 프로그램을 작성하시오.
# 동점자의 경우 같은 순위를 부여한다. (예를 들어, 85 100 85 74점이면,
# 2등 1등 2등 4등과 같이 순위가 매겨진다.)
# 첫 줄에 학생의 수가 입력된다.(1000이하의 정수) 다음줄에는 각 학생의 점수가
# 주어진다. 입력된 순서대로 각 학생이 몇 등인지 출력한다.
# 입력된 순서대로 각 학생이 몇 등인지 출력한다.
# method 1
import sys
n = int(input())
d = list(map(int, sys.stdin.readline().strip().split()))
for i in range(n):
    rank = 1
    for j in range(n):
        if d[j] > d[i]:
            rank += 1
    print(d[i], rank)