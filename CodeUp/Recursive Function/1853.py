# 재귀로 1부터 n까지 합 리턴하기
# int형 정수(n) 1개가 입력 | 1부터 n까지의 정수 합 출력
# method 1
n = int(input())
def sum(n, s):
    if n < 1:
        return s
    else:
        s += n
        n -= 1
        return sum(n, s)
print(sum(n, 0))