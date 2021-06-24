# 테두리의 합(sum of bordering)
# 정수 N을 입력받아 1~N*N까지 2차원 배열에 저정한 후 사각 테두리에 있는
# 배열값들만 합하여 출력하시오. 예를 들어 3을 입력한다면 테두리의 값인
# 1+2+3+6+9+8+7+4=40을 출력하는 프로그램을 작성하시오.
# method 1
n = int(input())
d = []
k = 0
for i in range(n):
    d.append([])
    for j in range(n):
        k += 1
        d[i].append(k)
s = 0
for i in range(n):
    if i == 0 or i == n-1:
        for j in range(n):
            s += d[i][j]
    else:
        s += d[i][0]
        s += d[i][n-1]
print(s)