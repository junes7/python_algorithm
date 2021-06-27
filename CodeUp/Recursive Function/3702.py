# 파스칼의 삼각형 2 (get value of pascal triangle)
# 다음과 같은 삼각형을 파스칼의 삼각형이라고 한다.
# 1  1  1  1  1  1  1  1
# 1  2  3  4  5  6  7
# 1  3  6 10 15 21
# 1  4 10 20 35
# 1  5 15 35
# 1  6 21
# 1  7
# 1
# 회전 변환된 이 삼각형에서 (r행, c열)의 값을 알 수 있는 프로그램을 작성.
# 행과 열은 1부터 시작된다. | (r,c)의 원소 값을 1억으로 나눈 나머지 출력
# method 1 with memoization
r, c = map(int, input().split())
d = {}
def pascal_tri(r, c):
    sum = 0
    if r == 1 or c == 1:
        sum += 1
        d[(r, c)] = sum
        return sum
    else:
        if (r-1, c) not in d:
            d[(r-1, c)] = pascal_tri(r-1, c)
        if (r, c-1) not in d:
            d[(r, c-1)] = pascal_tri(r, c-1)
        sum += (d[(r-1, c)] + d[(r, c-1)]) % 100000000
        return sum
print(pascal_tri(r, c))