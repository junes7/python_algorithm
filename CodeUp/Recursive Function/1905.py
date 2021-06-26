# (재귀함수) 1부터 n까지 합 구하기
# get sum from 1 to n by using recursive function
# 정수 n이 입력으로 들어오면 1부터 n까지의 합을 구하시오.
# 입력으로 자연수 n이 입력 | 1부터 n까지의 합을 출력
# 12345 -> 76205685
# method 1
import sys
sys.setrecursionlimit(1000000)
d = int(input())

def sum(n):
    if n <= 1:
        return 1
    return sum(n-1) + n
    
print(sum(d))