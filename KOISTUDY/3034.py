# 단어 2개 입력받아 이어 붙이기
# input two words and concatenate them
# 알파벳과 숫자로 이루어진 단어 2개를 입력받아 순서대로 붙여 출력해 보자.
import sys
input = sys.stdin.readline
w1, w2 = input().split()
sys.stdout.write(w1+w2)