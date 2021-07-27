# 정수 1개 입력받아 그대로 출력하기(print one integer)
# 정수(integer)는 양의 정수(1, 2, 3, 4, 5, ...), 
# 음의 정수(-1, -2, -3, -4, -5, ...), 0과 같이
# 소숫점 아래에 수가 없는 수라고 할 수 있다.
# 변수에 정숫값을 저장한 후 변수에 저장되어 있는 값을 그대로 출력해 보자.
import sys
input = sys.stdin.readline
n = int(input())
print(n)