# 구구단 출력하기
# print multiplication table
# 1~9까지의 숫자 중 하나를 입력하면 그 단의
# 구구단 결과를 한 줄에 출력하는 프로그램을 작성
n=int(input())
for i in range(1, 10):
    print(n*i, end=' ')