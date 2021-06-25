# (재귀 함수 Recursive Function) 1부터 n까지 출력하기
# 1부터 정수 n까지 출력하는 재귀함수를 설계하시오.
# 정수 n이 입력| 1부터 n까지 한 줄에 하나씩 출력
# method 1
n = int(input())
a = 0
def Recur(d, k):
    if d - k == 0:
        return
    else:
        k += 1
        print(k)
        return Recur(d, k)
Recur(n, a)