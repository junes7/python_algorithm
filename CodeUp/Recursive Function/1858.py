# 파스칼의 삼각형 출력하기(print pascal's triangle)
# 파스칼의 삼각형은 다음과 같은 방법으로 만들 수 있다.
# 어떤 줄의 다음 줄에는, 그 윗줄에 있는 왼쪽과 오른쪽 숫자를 더한 값을 쓴다.
#    1
#   1 1
#  1 2 1
# 1 3 3 1
# 위의 방법에 따라 높이가 5인 파스칼의 삼각형을 그리면 다음과 같이 된다.
# 1
# 1 1
# 1 2 1
# 1 3 3 1
# 1 4 6 4 1
# 줄번호(n)와 위치번호(k)가 주어질 때, 그 위치의 수를 출력하시오.
# 예를 들어, 파스칼의 삼각형 5번째 줄의 2번째 위치의 수는 4이다.
# method 1
n, k = map(int, input().split())
d = {}
def pascal(n, k):
    if k == 1 or k == n:
        d[(n, k)] = 1
        return d[(n, k)]
    else:
        d[(n, k)] = pascal(n-1, k-1) + pascal(n-1, k)
        return d[(n, k)]
print(pascal(n, k))