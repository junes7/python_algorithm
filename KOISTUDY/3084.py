# 문자 1개 입력받아 알파벳 출력하기
# print alphabet until one integer
# 영문 소문자 1개를 입력받아 a부터 그 문자까지 순서대로 스페이스로
# 분리해서 한 문자씩, 한 줄에 출력해 보자.
for i in range(ord('a'),ord(input())+1):
    print(chr(i), end=' ')