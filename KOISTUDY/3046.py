# 단어 여러 번 출력하기
# print word many times
# 단어와 반복 횟수를 입력받아 그 단어를 그 횟수만큼 출력해 보자.
import sys
s, n = sys.stdin.readline().rstrip().split()
sys.stdout.write(s * int(n))