# 16진수 구구단 출력하기
# print multiplication table as hexadecimal number
# 16진수(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)를 배운
# 영일이는 16진수끼리 곱하는 16진수 구구단?에 대해서 궁금해졌다.
# 16진수 A, B, C, D, E, F 중 하나가 입력될 때,
# 1부터 F까지 순서대로 곱한 16진수 구구단을 출력해 보자.
n=int(input(),16)
for i in range(1,16):
    print('%X'%n,'*%X'%i,'=%X'%(n*i),sep='')