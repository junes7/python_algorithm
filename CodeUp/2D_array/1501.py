# 2 차원 배열 채우기 1
# 크기가 n인 2차원 배열 출력
# method 1
# n = int(input())
# t = 0
# b = []
# for i in range(n):
#     b.append([])
#     for j in range(n):
#         t += 1
#         b[i].append(t)
# for i in range(n):
#     for j in range(n):
#         print(b[i][j], end=' ')
#     print()
# method 2
n = int(input())
for i in range(1, n**2+1):
    print(i, end=' ')
    if i % n == 0:
        print() 