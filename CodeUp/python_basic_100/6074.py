# 문자 1개 입력받아 알파벳 출력하기
# 영문 소문자(a ~ z) 1개가 입력되었을 때,
# a부터 그 문자까지의 알파벳을 순서대로 
# 1줄로 출력해보자.
# method 1
# c = ord(input())
# t = ord('a')
# while t <= c:
#     print(chr(t), end=' ')
#     t += 1
# method 2
c = ord(input())
t = ord('a')
for a in range(t, c+1):
    print(chr(a), end=' ')