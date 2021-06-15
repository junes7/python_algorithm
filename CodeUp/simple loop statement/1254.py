# 알파벳 출력하기
# 시작 알파벳과 마지막 알파벳을 입력받아 그
# 두 알파벳 사이의 모든 알파벳을 출력하시오.
# method 1
a1, a2 = map(ord, input().split())
for i in range(a1, a2+1):
    print(chr(i), end=' ')