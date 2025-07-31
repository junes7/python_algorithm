import sys
input=lambda:sys.stdin.readline().rstrip()
A, B = input().split()
N = len(A)
M = len(B)
matrix = [['.'] * N for _ in range(M)]
for i in range(N):
    if A[i] in B:
        row = i
        col = B.index(A[i])
        break
for i in range(M):
    matrix[i][row] = B[i]
for i in range(N):
    matrix[col][i] = A[i]
for i in matrix:
    print(''.join(i))