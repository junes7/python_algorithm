# 파스칼의 삼각형 출력하기(print pascal's triangle) 2
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
# 파스칼이 삼각형 높이(n)가 주어질 때, 파스칼의 삼각형을 출력하시오.
# method 1 with memoization and dictionary array
n = int(input())
d = {}
def prt(k, c):
    if k < c:
        return
    elif c == 1 or c == k:
        d[(k, c)] = 1
        print(d[(k, c)], end= ' ')
        c += 1
        return prt(k, c)
    else:
        d[(k, c)] = d[(k-1, c-1)] + d[(k-1, c)]
        print(d[(k, c)], end= ' ')
        c += 1
        return prt(k, c)
def pascalTri(n, k):
    if n < k:
        return
    else:
        prt(k, 1)
        k += 1
        print()
        return pascalTri(n, k)
pascalTri(n, 1)