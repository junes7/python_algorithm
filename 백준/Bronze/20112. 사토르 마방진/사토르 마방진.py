import sys
N = int(sys.stdin.readline())
# 해당 크기 만큼의 배열 초기화
row_word = [['' for _ in range(N)] for _ in range(N)]
col_word = [['' for _ in range(N)] for _ in range(N)]
result = "YES"
for i in range(N):
    word = input()
    for j, val in enumerate(word, start=0):
        row_word[i][j] = val
        col_word[j][i] = row_word[i][j]
if row_word != col_word:
    result = "NO"
print(result)