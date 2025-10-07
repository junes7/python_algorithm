import sys
input=lambda:sys.stdin.readline().rstrip()
matrix = [[0] * 100 for _ in range(100)]
result = 0
for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split()) # 1 2 4 4 
    for i in range(y1, y2): # 2, 4 
        for j in range(x1, x2): # 1, 4
            matrix[i][j] = 1
for k in matrix:
    result += sum(k)
print(result)