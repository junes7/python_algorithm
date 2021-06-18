# 숫자 로테이션(number rotation)
# n개의 숫자가 입력되면, n개의 숫자를 왼쪽으로 하나씩 돌려서 출력하시오.
# method 1
n = int(input())
k = input().split()
for i in range(n):
    for j in range(n):
        if (i+j) >= n:
            print(k[i+j-n], end=' ')
        else:
            print(k[i+j], end=' ')
    print()