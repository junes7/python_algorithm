# 배열 두번 출력하기(print array twice)
# k개의 숫자를 입력받고 그 숫자들을 두번 출력하시오.
# method 1
n = int(input())
a = input().split()
for i in range(2):
    for i in range(n):
        print(a[i])