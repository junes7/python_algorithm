# SuperSum
# SuperSum 함수는 다음과 같이 정의. SuperSum(0, n)=n(n은 모든 양의 정수)
# SuperSum(k, n)=SuperSum(k-1, 1)+SuperSum(k-1, 2)+...+SuperSum(k-1, n)
# k와 n이 여러개 주어진다. SuperSum의 값을 각각 출력하시오.
# method 1 with dictionary and memoization
# import sys
# # 입력이 끝날때까지 입력 받겠다.
# def SuperSum(k, n):
#     sum = 0
#     if k == 0:
#         d[(k, n)] = n
#         sum += n
#     else:
#         for i in range(1, n+1):
#             if (k-1, n) not in d:
#                 d[(k-1, i)] = SuperSum(k-1, i)
#             sum += d[(k-1, i)]
#     return sum
# for line in sys.stdin:
#     k, n = map(int, line.split())
#     d = {}
#     print(SuperSum(k, n))

# method 2 with array and memoization
import sys
def SuperSum(k, n):
    if k == 0:
        d[k][n] = n
        return n
    elif d[k][n] == 0:
        sum = 0
        for i in range(1, n+1):
            sum += SuperSum(k-1, i)
        d[k][n] = sum
        return sum 
    else:
        return d[k][n]
for line in sys.stdin:
    k, n = map(int, line.split())
    d = [[0] * (n+1) for i in range(k+1)]
    print(SuperSum(k, n))