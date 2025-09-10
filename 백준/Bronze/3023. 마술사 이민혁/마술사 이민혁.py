import sys
input=lambda:sys.stdin.readline().rstrip()
R, C = map(int, input().split())
a = []
b = [[0 for j in range(2*C)] for i in range(2*R)]
for r in range(R):
    a.append(input())
for i in range(R):
    for j in range(C):
        b[i][j] = a[i][j]
for i in range(R):
    for j in range(C, 2*C):
        b[i][j] = b[i][2*C-j-1]
for i in range(R, 2*R):
    for j in range(2*C):
        b[i][j] = b[2*R-i-1][j]
A, B = map(int, input().split())
if b[A-1][B-1] == '#':
    b[A-1][B-1] = '.'
else:
    b[A-1][B-1] = '#'
for r in range(2*R):
    for c in range(2*C):
        print(b[r][c], end = '')
    print()