# 재귀로 각 자리수의 합 리턴하기
# 한 정수 n을 입력받아 각 자리수의 합을 출력하시오.
# method 1
n = int(input())
def bitSum(n, s):
    if n == 0:
        return s
    else:
        s += n % 10
        n = n//10
        return bitSum(n, s)
print(bitSum(n, 0))